#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "health.h"
#include "graph.h"
#define MAX_ENTERS 24

/**
 * This main function displays the interface of the application
 * Returns: an int.
 */

int main(void)
{
	struct BMI bmi_data;
	struct Exercise exercise_data;
	struct Meal_data;
	struct WaterIntake water_data[MAX_ENTRIES];
	int choice;

	do

	{
		/*display menu options*/
		printf("\nPersonal Health and Fitness Assistment\n");
		printf("====================================\n");
		printf("1. calculate BMI\n");
		printf("2. log Exercise\n");
		printf("3. log Meal\n");
		printf("4. log water Intake\n");
		printf("5. Display Water Intake Chart\n");
		printf("0. Exit\n");
		Printf("Please enter you preference: ");

		scanf("%d", &choice);

		switch (choice)
		{
			/*BMI calculation*/
			case 1:
				printf("\n Enter your height (in meters): ");
				scanf("%lf" bmi_data.height);

				printf("Enter your weight (in kilogrames): ");
				scanf("&lf", &bmi_data.weight);

				double bmi_result = calculateBMI(bmi_data);
				printf("\nYour BMI: %.2f\n", bmi_result);
				break;
			case 2:
				/*fitness Tracking */
				printf("Enter the type of exercise: ");
				scanf("%s", ecercise_data.type);

				printf("Enter the exercise duration (in minutes): ");
				scanf("%d", &exercise_data.duration);

				printf("Enter exercise intensity: ");
				scanf("%lf", &ecercise_data.intensity);

				logExercise(exercise_data);
				printf("\nExercise logged successfully!\n");
				break;
			case 3:
				/*Nutrition logging*/
				printf("\nEnter the name of the meal or snack: ");
				scanf("%s"meal_data.name);

				printf("Enter calories in the meal or snack: ");
				scanf("%d", meal_data.calories);

				printf("Enter the protein content in grams: ");
				scanf("%lf", &meal_data.protein);

				printf("Enter the carbohydrate content in grams: ");
				scanf("%lf", &meal_data.carbohydrates);

				printf("Enter the fats content in grams: ");
				scanf("%lf", &meal_data.fats);

				logMeal(meal_data);
				printf("\nMeal logged successfully!\n");
				break;
			case 4:
				/*Water intake tracking */
				for (int i = 0; i < MAX_ENTRIES; i++)
				{
					printf("\nEnter the amount of water consumed (in ml): ");
					scanf("%d", &water_data[i].amount);

					printf("Enter the time of water consumption (e.g., \"08:00 AM\"): ");
					scanf("%s", water_data[i].time)
				}
				logWaterIntake(water_data);
				printf("\nWater intake logged successfully!\n");
				break;
			case 5:
				displayWaterIntakeChart(water_data, MAX_ENTRIES);
				break;
			case 0:
				/*Exit the program*/
				printf("\nExiting the Personal Health and Fitness Assistant. Goodbye!\n");
				break;
			default:
				printf("\nInvalid choice. Please try again.\n");
				break;
		}
	}
	while (choice != 0);
	return (0);
}
