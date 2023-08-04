#include <stdio.h>
#include "health.h"

void display_nutritional_habits(const struct FoodLog* food_logs, int num_food_logs) {
    // Calculate total calories consumed
    double total_calories_consumed = 0.0;
    for (int i = 0; i < num_food_logs; i++) {
        total_calories_consumed += food_logs[i].calories;
    }

    // Display nutritional habits
    printf("Nutritional Habits:\n");
    printf("Total Calories Consumed: %.2f calories\n", total_calories_consumed);

    // Analyze nutritional habits
    if (total_calories_consumed < 2000) {
        printf("Your daily calorie intake is relatively low. Consider adding more nutritious foods to your diet.\n");
    } else if (total_calories_consumed >= 2000 && total_calories_consumed <= 2500) {
        printf("Your daily calorie intake is balanced. Keep up the good work!\n");
    } else {
        printf("Your daily calorie intake is relatively high. Consider making healthier food choices and portion control.\n");
    }

    // You can add more nutritional analysis based on other nutrient information in food logs.

    printf("Remember, a balanced and nutritious diet is essential for good health and well-being.\n");
}
