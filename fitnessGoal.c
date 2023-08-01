#include <stdio.h>
#include <string.h>
#include "health.h"

/**
 * identifyFitnessGoal - a function that takes uers input and
 * returns the identified primary fitness goal based on the keywords
 * prensent in the input.
 * @fitnessGoals: keyword to be checked
 * Return: profile.fitnessGoal
 */

enum FitnessGoal identifyFitnessGoal(const char *fitnessGoals)
{
	struct UserProfile profile = getUserProfile();

	if (strstr(fitnessGoal, "weight loss") || strstr(fitnessGoal, "lose weight"))
	{
		profile.fitnessGoal = WEIGHT_LOSS;
	}
	else if (strstr(fitnessGoal, "muscle gain") || strstr(fitnessGoal, "build muscle"))
	{
		profile.fitnessGoal = MUSCLE_GAIN;
	}
	else if (strstr(fitnessGoals, "overall fitness") || strstr(fitnessGoals, "get fit"))
	{
		profile.fitnessGoal = OVERALL_FITNESS;
	}
	else
	{
		profile.fitnessGoal = SPECIFIC_HEALTH_IMPROVEMENTS;
	}
	return (profile.fitnessGoal);
}
