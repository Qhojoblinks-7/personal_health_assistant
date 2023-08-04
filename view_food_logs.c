#include <stdio.h>
#include "health.h"

/**
 * view_food_logs - function will display all the logged food
 * consumption entries along with their details
 * @food_logs: logs made
 * @num_food_logs: number of logs made
 */

void view_food_logs(const struct FoodLog* food_logs, int num_food_logs)
{
	printf("\nFood Log:\n");
	printf("--------------------\n");


	if (num_food_logs == 0)
	{
		printf("No food consumption logged yet.\n");
		return;
	}

	for (int i = 0; i < num_food_logs; i++)
	{
		printf("Food: %s\n", food_logs[i].food);
		printf("Calories: %.2f\n", food_logs[i].calories);
		printf("--------------------\n");
	}
}
