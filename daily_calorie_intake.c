#include <stdio.h>
#include "health.h"

/**
 * calculate_daily_calorie_intake - function will calculate the user's
 * recommended daily calorie intake based on their profile information.
 * @profile: a pointer to the profile  of the user
 * Return: bmr
 */

double calculate_daily_calorie_intake(const struct Profile* profile) {
    double bmr;
    if (profile->gender == MALE) {
        bmr = 88.362 + (13.397 * profile->weight) + (4.799 * profile->height) - (5.677 * profile->age);
    } else {
        bmr = 447.593 + (9.247 * profile->weight) + (3.098 * profile->height) - (4.330 * profile->age);
    }

    double activity_factor;
    switch (profile->activity_level) {
        case SEDENTARY:
            activity_factor = 1.2;
            break;
        case LIGHTLY_ACTIVE:
            activity_factor = 1.375;
            break;
        case MODERATELY_ACTIVE:
            activity_factor = 1.55;
            break;
        case VERY_ACTIVE:
            activity_factor = 1.725;
            break;
        case EXTRA_ACTIVE:
            activity_factor = 1.9;
            break;
        default:
            activity_factor = 1.0;
            break;
    }

    return bmr * activity_factor;
}

