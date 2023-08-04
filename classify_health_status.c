#include <stdio.h>
#include "health.h"

/**
 * classify_health_status - a function that classifies the health
 * status of the user based on the BMI
 * @bmi: the number to use
 */

void classify_health_status(double bmi)
{
	printf("\nHealth Status:\n");
	printf("--------------------\n");

	if (bmi < 18.5)
	{
		printf("BMI Category: Underweight\n");
		printf("Recommendations:\n");
		printf("- Increase caloric intake to gain weight in a healthy way.\n");
		printf("- Focus on nutrient-dense foods, such as nuts, avocados, and lean proteins.\n");
		printf("- Incorporate strength training exercises to build muscle mass.\n");
	}
	else if (bmi >= 18.5 && bmi < 24.9)
	{
		printf("BMI Category: Normal Weight\n");
		printf("Recommendations:\n");
		printf("- Maintain a balanced diet with a variety of fruits, vegetables, and whole grains.\n");
		printf("- Engage in regular physical activity, such as aerobic exercises and strength training.\n");
		printf("- Get enough sleep and manage stress levels.\n");
	}
	else if (bmi >= 25 && bmi < 29.9)
	{
		printf("BMI Category: Overweight\n");
		printf("Recommendations:\n");
		printf("- Focus on portion control and mindful eating to manage weight.\n");
		printf("- Increase physical activity, such as walking, cycling, or swimming.\n");
		printf("- Reduce consumption of sugary drinks and processed foods.\n");
	}
	else
	{
		printf("BMI Category: Obese\n");
		printf("Recommendations:\n");
		printf("- Seek professional advice and guidance for a personalized weight management plan.\n");
		printf("- Gradually incorporate moderate-intensity exercises into your routine.\n");
		printf("- Make long-term lifestyle changes, including a balanced diet and regular exercise.\n");
	}
	printf("--------------------\n");
}
