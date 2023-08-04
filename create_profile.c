#include <stdio.h>
#include "health.h"

/**
 * create_profile - a function that creates the profile
 * of the user.
 * @profile: a pointer to the structure profile
 */

void create_profile(struct Profile* profile)
{
	int c;

	/*clearing input buffer*/
	while ((c = getchar()) != '\n' && c != EOF);

	printf("Lets's craete your profile:\n");

	printf("Enter your name: ");
	fgets(profile->name, MAX_NAME_LENGTH, stdin);


	int len = strlen(profile->name);
	if (len > 0 && profile->name[len - 1] == '\n')
	{
		profile->name[len - 1] = '\0';
	}


	printf("Enter your age: ");
	scanf("%d", &profile->age);
	while ((c = getchar()) != '\n' && c != EOF);

	printf("Enter your gender (M/F): ");
	scanf(" %c", &profile->gender);
	while ((c = getchar()) != '\n' && c != EOF);

	printf("Enter your weigth (kg): ");
	scanf("%lf", &profile->weigth);
	while ((c = getchar()) != '\n' && c != EOF);

	printf("Enter your height (cm): ");
	scanf("%lf", &profile->heigth);
	while ((c = getchar()) != '\n' && c != EOF);
}
