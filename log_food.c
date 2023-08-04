#include <stdio.h>
#include "health.h"

/**
 * log_food - a function that keeps track of food consumtion
 * @food_logs: keeps track of the type of food comsumed
 * @num_food_logs: the number of types of food consumed
 */

void log_food(struct FoodLog* food_logs, int* num_food_logs)
{
	int c;

	(*num_food_logs >= MAX_FOOD_LOGS)
	{
		printf("Food log is full. Cannot log more food entries.\n");
		return;
	}

	printf("Log Food Consumption:\n");

	printf("Enter the name of the food: ");
	fgets(food_logs[*num_food_logs].food, MAX_NAME_LENGTH, stdin);
	int len = strlen(food_logs[*num_food_logs].food);
	if (len > 0 && food_logs[*num_food_logs].food[len - 1] == '\n')
	{
		food_logs[*num_food_logs].food[len - 1] = '\0';
	}

	printf("Enter the number of calories consumed: ");
	scanf("%lf", &food_logs[*num_food_logs].calories);
	while (( c = getchar()) == '\n' && c != EOF);

	(*num_food_logs)++;
}
