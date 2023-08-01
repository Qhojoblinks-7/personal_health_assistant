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

enum FitnessGoal
{
	WEIGHT_LOSS,
	MUSCLE_GAIN,
	OVERALL_FITNESS,
	SPECIFIC_HEALTH_IMPROVEMENTS
};
extern enum FitnessGoal identifyFitnessGoal(const char* fitnessGoals);

struct UserProfile
{
	int age;
	char gender[10];
	double weight;
	double height;
	char fitnessGoald[100];
	char medicalCondition[200];
	enum FitnessGoal fitnessGoal;
};
extern struct UserProfile getUserProfile(void);

struct ExercisePlan
{
	char type[50];
	int duration;
	double intensity;
};

extern void fitnessAssessment(const struct UserProfile* user);
extern void generateExercisePlan(enum FitnessGoal goal, struct ExercisePlan* plan);
#endif
