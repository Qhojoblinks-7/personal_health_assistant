#include <stdio.h>
#include <string.h>
#include "health.h"

/**
 * getUserProfile - a function that collects user profile info
 * Return: profile
 */

struct UserProfile getUserProfile(void)
{
	struct UserProfile profile;

	printf("Welcome to the Personal Health and Fitness Assistant!\n");

	printf("Please enter your age: ");
	scanf("%d", &profile.age);

	printf("Please enter your gender (Male/Female/Other): ");
	scanf("%s", profile.gender);

	printf("Please enter your weight (in kilograms): ");
	scanf("%lf", &profile.weight);

	printf("Please enter your height (in meters): ");
	scanf("%lf", &profile.height);

	printf("Please enter your fitness goals: ");
	getchar(); /*clear the newline character from the current input*/
	fgets(profile.fitnessGoals, sizeof(profile.fitnessGoals), stdin);
	profile.fitnessGoals[strcspn(profile.fitnessGoals, "\n")] = '\0';

	printf("Do you have any existing medical conditions or physical limitations? (Yes/No): ");
	char response[10];

	scanf("%s", response);

	if (strcmp(response, "Yes") == 0 || strcmp(response, "yes") == 0)
	{
		printf("Please describe your medical conditions or physical limitations: ");
		getchar();
		fgets(profile.medicalConditions, sizeof(profile.medicalConditions), stdin);
		profile.medicalConditions[strcspn(profile.medicalConditions, "\n")] = '\0';
	}
	else
	{
		profile.medicalConditions[0] = '\0';
	}
	return (profile);
}
