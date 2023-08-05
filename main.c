#include <stdio.h>
#include "health.h"

int main(void)
{
	/*Load logs from file*/
	struct ExerciseLog exercise_logs[MAX_EXERCISE_LOGS];
	int num_exercise_logs = 0;
	struct FoodLog food_logs[MAX_FOOD_LOGS];
	int num_food_logs = 0;
	load_logs_from_file(exercise_logs, &num_exercise_logs, food_logs, &num_food_logs);

	/*Create profile*/
	struct Profile profile;
	create_profile(&profile);

	/*Calculate BMI and display health status*/
	double bmi = calculate_bmi(&profile);
	classify_health_status(bmi);

	int choice;

	do

	{

		printf("Health Assistant Menu\n");
		printf("----------------------\n");
		printf("1. Log Exercise\n");
		printf("2. Log Food Intake\n");
		printf("3. View Exercise Logs\n");
		printf("4. View Food Logs\n");
		printf("5. Display Exercise Chart\n");
		printf("6. Display Daily Calorie Intake\n");
		printf("7. Display Fitness Progress\n");
		printf("8. Display Nutritional Habits\n");
		printf("9. Provide Exercise Recommendations\n");
		printf("10. Display Educational Content\n");
		printf("0. Exit\n");
		printf("----------------------\n");
		printf("Enter your choice: ");

		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				log_exercise(exercise_logs, &num_exercise_logs);
				break;
			case 2:
				log_food(food_logs, &num_food_logs);
				break;
			case 3:
				view_exercise_logs(exercise_logs, num_exercise_logs);
				break;
			case 4:
				view_food_logs(food_logs, num_food_logs);
				break;
			case 5:
				display_exercise_chart(exercise_logs, num_exercise_logs);
				break;
			case 6:
				calculate_daily_calorie_intake(&profile);
				break;
			case 7:
				display_fitness_progress(exercise_logs, num_exercise_logs, food_logs, num_food_logs);
				break;
			case 8:
				display_nutritional_habits(food_logs, num_food_logs);
				break;
			case 9:
				provide_exercise_recommendations(&profile);
				break;
			case 10:
				display_educational_content();
				break;
			case 0:
				break;
			default:
				printf("Invalid choice. Please try again.\n");
				break;
		}

		if (choice != 0)
		{
			printf("Press any key to continue...");
			getchar();
		}
	}while (choice != 0);

	load_logs_from_file(exercise_logs, &num_exercise_logs, food_logs, &num_food_logs);

	return (0);
}

