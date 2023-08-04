#include <stdio.h>
#include <stdlib.h>
#include "health.h"

/**
 * display_food_chart - a function that prints the food chart
 * using GNUPLOT
 * @food_logs: logs made
 * @num_food_logs: number of logs made
 */

void display_food_chart(const struct FoodLog* food_logs, int num_food_logs)
{
	FILE *gnuplot = fopen("gnuplot", "w");
	if (!gnuplot)
	{
		printf("Error: Gnuplot not found or could not be opened.\n");
		return;
	}

	fprintf(gnuplot, "set terminal wxt size 800, 400\n");
	fprintf(gnuplot, "set title 'Food Calories Consumed Over Time'\n");
	fprintf(gnuplot, "set xlabel 'Time'\n");
	fprintf(gnuplot, "set ylabel 'Calories'\n");
	fprintf(gnuplot, "set xtics rotate\n");
	fprintf(gnuplot, "set grid\n");
	fprintf(gnuplot, "set style fill solid\n");
	fprintf(gnuplot, "set boxwidth 0.5\n");
	fprintf(gnuplot, "plot '-' using 2:xtic(1) with boxes title 'Calories'\n");


	for (int i = 0; i < num_food_logs; i++)
	{
		fprintf(gnuplot, "%d %.2f\n", i, food_logs[i].calories);
	}
	fprintf(gnuplot, "e\n");

	fflush(gnuplot);
	fclose(gnuplot);
}
