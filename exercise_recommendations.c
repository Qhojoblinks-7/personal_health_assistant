#include <stdio.h>
#include "health.h"


void provide_exercise_recommendations(const struct Profile* profile) {
    // Provide exercise recommendations based on the user's activity level and goals.
    printf("Exercise Recommendations for %s:\n", profile->name);

    switch (profile->activity_level) {
        case SEDENTARY:
            printf("You have a sedentary lifestyle. It's essential to incorporate regular physical activity into your routine.\n");
            printf("Consider starting with light exercises such as walking, stretching, or yoga.\n");
            break;
        case LIGHTLY_ACTIVE:
            printf("You have a lightly active lifestyle. Maintain your current activity level and try to add some variety to your workouts.\n");
            printf("Consider combining cardiovascular exercises, strength training, and flexibility exercises.\n");
            break;
        case MODERATELY_ACTIVE:
            printf("You have a moderately active lifestyle. Keep up the good work and continue with your regular workouts.\n");
            printf("Consider adding some high-intensity interval training (HIIT) or resistance training to challenge yourself.\n");
            break;
        case VERY_ACTIVE:
            printf("You have a very active lifestyle. Great job! Continue with your challenging workouts.\n");
            printf("Consider incorporating more advanced exercises and workouts, such as circuit training or sports activities.\n");
            break;
        case EXTRA_ACTIVE:
            printf("You have an extra active lifestyle. Fantastic! Your activity level is excellent for maintaining good health.\n");
            printf("Keep doing what you enjoy, and don't forget to allow adequate time for rest and recovery.\n");
            break;
        default:
            printf("Error: Invalid activity level. Please update your profile with a valid activity level.\n");
            break;
    }
}
