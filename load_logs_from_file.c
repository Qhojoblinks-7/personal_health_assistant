#include <stdio.h>
#include "health.h"
#include <string.h>

/**
 * load_logs_from_file - a function that helps review
 * their past data and continue monitoring their progress.
 * @exercise_logs: a pointre to ex logs
 * @num_exercise_logs: a pointer to num of logs
 * @food_logs: a pointer to food logs
 * @num_food_logs: a pointer to num of logs
 */

void load_logs_from_file(struct ExerciseLog* exercise_logs, int* num_exercise_logs,
                         struct FoodLog* food_logs, int* num_food_logs) {
    FILE* file = fopen("health_logs.txt", "r");
    if (!file) {
        printf("Error: Failed to open the file for reading.\n");
        return;
    }

    /* Clear the existing logs*/
    *num_exercise_logs = 0;
    *num_food_logs = 0;

    enum { MAX_BUFFER_SIZE = 100 };
    char buffer[MAX_BUFFER_SIZE];

    /*Read exercise logs*/
    while (fgets(buffer, sizeof(buffer), file)) {
        if (buffer[0] == '\n') {
            break; /* Move to the next section*/
        }

        char activity[MAX_NAME_LENGTH];
        double duration, intensity;

        if (sscanf(buffer, "Activity: %49[^\n]", activity) == 1) {
            fgets(buffer, sizeof(buffer), file); /* Read the next line*/
            sscanf(buffer, "Duration: %lf minutes", &duration);
            fgets(buffer, sizeof(buffer), file); /*Read the next line*/
            sscanf(buffer, "Intensity: %lf", &intensity);

            /* Add the log to the exercise_logs array*/
            if (*num_exercise_logs < MAX_EXERCISE_LOGS) {
                strncpy(exercise_logs[*num_exercise_logs].activity, activity, MAX_NAME_LENGTH);
                exercise_logs[*num_exercise_logs].duration = duration;
                exercise_logs[*num_exercise_logs].intensity = intensity;
                (*num_exercise_logs)++;
            }
        }
    }

    /*Read food logs*/
    while (fgets(buffer, sizeof(buffer), file)) {
        if (buffer[0] == '\n') {
            break; /*Move to the next section*/
        }

        char food[MAX_NAME_LENGTH];
        double calories;

        if (sscanf(buffer, "Food: %49[^\n]", food) == 1) {
            fgets(buffer, sizeof(buffer), file); /* Read the next line*/
            sscanf(buffer, "Calories: %lf", &calories);

            /* Add the log to the food_logs array*/
            if (*num_food_logs < MAX_FOOD_LOGS) {
                strncpy(food_logs[*num_food_logs].food, food, MAX_NAME_LENGTH);
                food_logs[*num_food_logs].calories = calories;
                (*num_food_logs)++;
            }
        }
    }

    fclose(file);
}

