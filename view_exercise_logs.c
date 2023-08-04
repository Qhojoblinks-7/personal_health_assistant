#include <stdio.h>
#include "health.h"

/**
 * view_exercise_logs - function will display all the logged exercise
 * activities along with their details.
 * @exercise_logs: logs made
 * @num_exercise_logsnumber of logs made
 */

void view_exercise_logs(const struct ExerciseLog* exercise_logs, int num_exercise_logs)
{
	printf("\nExercise Log:\n");
	printf("--------------------\n");

	if (num_exercise_logs == 0)
	{
		printf("No exercise activities logged yet.\n");
		return;
	}

	int i;

	for (i = 0; i < num_exercise_log; i++)
	{
		printf("Activity: %s\n", exercise_logs[i].activity);
		printf("Duration: %.2f minutes\n", exercise_logs[i].duration);
		printf("Intensity: %.2f\n", exercise_logs[i].intensity);
		printf("--------------------\n");
	}
}
