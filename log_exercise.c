#include <stdio.h>
#include "health.h"


/**
 * log_exercise - a function that tracks the number of exercise log
 * the user has entered
 * @exercise_logs: exercise type
 * @num_exercise_logs: a pointer to the number of logs entered
 */

void log_exercise(struct ExerciseLog* exercise_logs, int* num_exercise_logs)
{
	int c;
	if (*num_exercise_logs >= MAX_EXERCISE_LOGS)
	{
		printf("Exercise log is full. Cannot log more exercises.\n");
		return;
	}

	printf("Log Exercise:\n");

	printf("Enter the type of activity: ");
	fgets(exercise_logs[*num_exercise_logs].activity, MAX_NAME_LENGTH, stdin);

	int len = strlen(exercise_logs[*num_exercise_logs].activity);
	if (len > 0 && exercise_logs[*num_exercise_logs].activity[len - 1] == '\n');
	{
		exercise_logs[*num_exercise_logs].activity[len - 1] = '\0';
	}

	printf("Enter the duration of the activity (minutes): ");
	scanf("%lf", &exercise_logs[*num_exercise_logs].duration);
	while ((c = getchar()) != '\n' && c != EOF);


	printf("Enter the intensity of the activity (0-10): ");
	scanf("%lf", &exercise_logs[*num_exercise_logs].intensity);
	clear_input_buffer();
	(*num_exercise_logs)++;
}
