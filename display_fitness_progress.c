#include <stdio.h>
#include "health.h"

void display_fitness_progress(const struct ExerciseLog* exercise_logs, int num_exercise_logs,
                              const struct FoodLog* food_logs, int num_food_logs) {
    // Calculate total calories burned from exercise
    double total_calories_burned = 0.0;
    for (int i = 0; i < num_exercise_logs; i++) {
        total_calories_burned += exercise_logs[i].duration * exercise_logs[i].intensity;
    }

    // Calculate total calories consumed from food
    double total_calories_consumed = 0.0;
    for (int i = 0; i < num_food_logs; i++) {
        total_calories_consumed += food_logs[i].calories;
    }

    // Calculate net calories (calories burned - calories consumed)
    double net_calories = total_calories_burned - total_calories_consumed;

    // Display fitness progress
    printf("Fitness Progress:\n");
    printf("Total Calories Burned from Exercise: %.2f calories\n", total_calories_burned);
    printf("Total Calories Consumed from Food: %.2f calories\n", total_calories_consumed);
    printf("Net Calories (Calories Burned - Calories Consumed): %.2f calories\n", net_calories);

    if (net_calories > 0) {
        printf("Congratulations! You have a caloric surplus. Consider adjusting your diet or exercise routine.\n");
    } else if (net_calories < 0) {
        printf("Great job! You have a caloric deficit. Keep up the good work!\n");
    } else {
        printf("You have achieved a caloric balance. Maintain your current lifestyle to stay on track.\n");
    }
}
