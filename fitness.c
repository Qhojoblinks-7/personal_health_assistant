#include "health.h"
#include <stdio.h>

/**
 * logExercise - A function that tracks the fitness of the user
 * @exercise_data: hold the data of the user's fitness
 */

void logExercise(struct Exercise exercise_data)
{
	FILE *exerciseLog;

	exerciseLog = fopen("exercise_log.txt", "a");

	if (exerciseLog != NULL)
	{
		fprintf(exerciseLog, "Type: %s, ", exercise_data.type);
		fprintf(exerciseLog, " Duration: %d minutes,", exercise_data.duration);
		fprintf(exerciseLog, " Intensity: %.2f\n", exercise_data.intensity);

		fclose(exerciseLog);

		printf("Start your exercise (press Enter when you're ready):\n");
		getchar();/* waiting for uer to press enter*/

		printf("Start your exercise:\n");
		startCountdownTimer(exercise_data.duration);
	}
	else
	{
		printf("Error: Unable to log exercise data.\n");
	}
}
