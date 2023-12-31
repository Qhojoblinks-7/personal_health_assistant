#include <stdio.h>
#include "health.h"

/**
 * save_logs_to_file - a function that saves logged infomation
 * @exercise_logs: all logged exercise
 * @num_exercise_logs: number of exercise logged
 * @food_logsall food logs
 * @num_food_logs:number of food logs
 */

void save_logs_to_file(const struct ExerciseLog* exercise_logs, int num_exercise_logs,const struct FoodLog* food_logs, int num_food_logs)
{
	int i;

	FILE *saved_file = fopen("health_logs.txt", "w");

	if (!saved_file)
	{
		printf("Error: Failed to open the file for writing.\n");
		return;
	}

	fprintf(saved_file, "Exercise Logs:\n");
	fprintf(saved_file, "--------------\n");

	for (i = 0; i < num_exercise_logs; i++)
	{
		fprintf(saved_file, "Activity: %s\n", exercise_logs[i].activity);
		fprintf(saved_file, "Duration: %.2f minutes\n", exercise_logs[i].duration);
		fprintf(saved_file, "Intensity: %.2f\n", exercise_logs[i].intensity);
		fprintf(saved_file, "--------------\n");
	}

	fprintf(saved_file, "\nFood Logs:\n");
	fprintf(saved_file, "--------------\n");

	for (i = 0; i < num_food_logs; i++)
	{
		fprintf(saved_file, "Food: %s\n", food_logs[i].food);
		fprintf(saved_file, "Calories: %.2f\n", food_logs[i].calories);
		fprintf(saved_file, "--------------\n");
	}

	fclose(saved_file);
	printf("Logs saved to 'health_logs.txt' successfully.\n");
}
