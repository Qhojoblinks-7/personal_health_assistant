#include "health.h"
#include <stdio.h>

/**
 * calculateBMI - a function that calculates the BMI of a person
 * @bmi_data: data to calculate the BMI
 * Return: a double
 */

double calculateBMI(struct BMI bmi_data)
{
	double bmi = bmi_data.weight / (bmi_data.height * bmi_data.height);

	return (bmi);
}
