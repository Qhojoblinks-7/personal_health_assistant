#include <stdio.h>
#include <stdlib.h>
#include "health.h"

/**
 * display_exercise_chart - a function that displays the progress of
 * the user using GNUPLOT
 * @exercise_logs: logs made
 * @num_exercise_logs: number of logs made
 */

void display_exercise_chart(const struct ExerciseLog* exercise_logs, int num_exercise_logs)
{
	FILE *gnuplot = fopen("gnuplot", "w");

	if (!gnuplot)
	{
		printf("Error: Gnuplot not found or could not be opened.\n");
		return;
	}

	fprintf(gnuplot, "set terminal wxt size 800, 400\n");
	fprintf(gnuplot, "set title 'Exercise Intensity Over Time'\n");
	fprintf(gnuplot, "set xlabel 'Time'\n");
	fprintf(gnuplot, "set ylabel 'Intensity'\n");
	fprintf(gnuplot, "set xtics rotate\n");
	fprintf(gnuplot, "set grid\n");
	fprintf(gnuplot, "plot '-' with linespoints title 'Intensity'\n");

	for (int i = 0; i < num_exercise_logs; i++)
	{
		fprintf(gnuplot, "%d %.2f\n", i, exercise_logs[i].intensity);
	}
	fprintf(gnuplot, "e\n");

	fflush(gnuplot);
	fclose(gnuplot);
}
