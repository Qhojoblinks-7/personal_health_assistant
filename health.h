#ifndef HEALTH_H
#define HEALTH_H

/*structure for BMI calculation*/

struct BMI {
	double height;
	double weight;
};

extern double calculateBMI(struct BMI bmi_data);

/*structure for fitness tracking data*/
struct Exercise {
	char type[50];	/*type of exercise*/
	int duration; /*duration in minutes*/
	double intensity; /*intensity level (eg., 1.5,2.0)*/
};

extern void logExercise(struct Exercise exercise_data);

/*structure for nutrition tracking data*/

struct Meal {
	char name[100]; /*Name of the meal or snack*/
	int calpories;/*calories in the meal/snack*/
	double protein;/*protain content in grams*/
	double carbohydrates; /*carbohydrate content in grams*/
	double fats;/*fats content in grams*/
};

extern void logMeal(struct Meal meal_data);

struct WaterIntake {
	int amount;
	char time[50];
};

extern void logWaterIntake(struct WaterIntake water_data[], int num_entries);
extern void beep();
extern void startCountdownTimer(int duration);
extern void waterIntakeReminder(int interval);
extern void displayWaterIntakeChart(const int water_intake[], int num_entries);
#endif
