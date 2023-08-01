#include <stdio.h>
#include "health.h"

/**
 * fitnessAssessment - a function that assess the users fitness
 * @user: a pointer to the user profile
 */

void fitnessAssessment(const struct UserProfile* user)
{
	printf("Fitness Assessment:\n");
	switch(user->fitnessGoal)
	{
		case WEIGHT_LOSS:
			printf("Based on your fitness goal for weight loss, we have evaluated your current fitness level.\n");
			printf("Recommendation: To achieve weight loss, we suggest a combination of cardio exercises like running and cycling, along with a calorie-controlled diet.\n");
			break;

		case MUSCLE_GAIN:
			printf("Based on your fitness goal for muscle gain, we have evaluated your current fitness level.\n");
			printf("Recommendation: To build muscle, focus on strength training exercises like weight lifting and bodyweight exercises. Ensure adequate protein intake to support muscle growth.\n");
			break;

		case SPECIFIC_HEALTH_IMPROVEMENTS:
			printf("Based on your fitness goal for specific health improvements, we have evaluated your current fitness level.\n");
			printf("Recommendation: To address specific health concerns, focus on exercises that target those areas. For example, if you want to improve flexibility, consider incorporating yoga or Pilates into your routine.\n");
			break;
		default:
			printf("Invalid fitness goal.\n");
			break;
	}
}
