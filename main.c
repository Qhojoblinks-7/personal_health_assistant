#include <stdio.h>
#include <health.h>

int main(void)
{
	struct Profile profile;
	struct ExerciseLog exercise_logs[MAX_EXERCISE_LOGS];
	int num_exercise_logs = 0;
	struct FoodLog food_logs[MAX_FOOD_LOGS];
	int num_food_logs = 0;

	print_welcome_message();

	load_logs_from_file(exercise_logs, &num_exercise_logs, food_logs, &num_food_logs);

	create_profile(&profile);

	calculate_bmi(&profile);

	log_exercise(exercise_logs, &num_exercise_logs);

	log_food(food_logs, &num_food_logs);

	view_exercise_logs(exercise_logs, num_exercise_logs);

	view_food_logs(food_logs, num_food_logs);

	display_exercise_chart(exercise_logs, num_exercise_logs);

	display_food_chart(food_logs, num_food_logs);

	save_logs_to_file(exercise_logs, num_exercise_logs, food_logs, num_food_logs);

	double daily_calories = calculate_daily_calorie_intake(&profile);
	printf("Your recommended daily calorie intake is: %.2f calories\n", daily_calories);
	display_fitness_progress(exercise_logs, num_exercise_logs, food_logs, num_food_logs);

	display_nutritional_habits(food_logs, num_food_logs);

	provide_exercise_recommendations(&profile);

	display_educational_content();

	return (0);
}
