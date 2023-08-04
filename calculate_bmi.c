#include <stdio.h>
#include "health.h"

/**
 * calculate_bmi - a function that calculates the BMI of the the user
 * @profile: a pointer to the structure profile
 */

void calculate_bmi(const struct Profile* profile)
{
	double height_meters = profile->height / 100.0;/*from height to meters*/
	double bmi = profile->weight / (height_meters * height_meters);


	printf("\nBMI Calculation:\n");
	printf("--------------------\n");
	printf("Name: %s\n", profile->name);
	printf("Age: %d\n", profile->age);
	printf("Gender: %c\n", profile->gender);
	printf("Weight: %.2f kg\n", profile->weight);
	printf("Height: %.2f cm\n", profile->height);
	printf("BMI: %.2f\n", bmi);
	printf("--------------------\n");

	classify_health_status(bmi);
}
