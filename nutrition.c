#include <stdio.h>
#include "health.h"

/**
 * logMeal - a function that keeps track of
 * the food consumption of the user
 * @meal_data: food comsumption data
 */

void logMeal(struct Meal meal_data)
{
	FILE *nutritionLog;

	nutritionLog = fopen("nutrition_log.txt", "a");

	if (nutritionLog != NULL)
	{
		fprintf(nutritionLog, "Nmae: %s, ", meal_data.name);
		fprintf(nutritionLog, "Calories: %d, ", meal_data.calories);
		fprintf(nutritionLog, "protein: %.2f g, ", meal_data.protein);
		fprintf(nutritionLog, "Carbohydrates: %.2f g, ", meal_data.carbohydrates);
		fprintf(nutritionLog, "Fats: %.2f g\n", meal_fats);
		fclose(nutritionLog);
	}
	else
	{
		printf("Error: Unable to log nutrition data.\n");
	}
}
