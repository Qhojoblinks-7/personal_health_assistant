#ifndef HEALTH__H
#define HEALTH__H

/*Define necessary constants*/
#define MAX_NAME_LENGTH 50
#define MAX_EXERCISE_LOGS 100
#define MAX_FOOD_LOGS 100

#ifndef HEALTH_ASSISTANT_ENUMS
#define HEALTH_ASSISTANT_ENUMS

typedef enum {
    MALE,
    FEMALE
} Gender;

// Custom enum to represent the activity level of the user
typedef enum {
    SEDENTARY,
    LIGHTLY_ACTIVE,
    MODERATELY_ACTIVE,
    VERY_ACTIVE,
    EXTRA_ACTIVE
} ActivityLevel;

#endif // HEALTH_ASSISTANT_ENUMS

/*Define data structures*/
struct Profile {
    char name[MAX_NAME_LENGTH];
    int age;
    char gender;
    double weight;
    double height;
    ActivityLevel activity_level;
};

struct ExerciseLog {
    char activity[MAX_NAME_LENGTH];
    double duration; /*in minutes*/
    double intensity;
};

struct FoodLog {
    char name[MAX_NAME_LENGTH];
    double calories;
};

/* Function prototypes*/
void print_welcome_message();
void create_profile(struct Profile* profile);
double calculate_bmi(const struct Profile* profile);
void classify_health_status(double bmi);
void log_exercise(struct ExerciseLog* exercise_logs, int* num_exercise_logs);
void log_food(struct FoodLog* food_logs, int* num_food_logs);
void display_fitness_progress(const struct ExerciseLog* exercise_logs, int num_exercise_logs,
                              const struct FoodLog* food_logs, int num_food_logs);
void display_nutritional_habits(const struct FoodLog* food_logs, int num_food_logs);
void provide_exercise_recommendations(const struct Profile* profile);
void display_educational_content();
void save_profile(const struct Profile* profile);
void save_exercise_logs(const struct ExerciseLog* exercise_logs, int num_exercise_logs);
void save_food_logs(const struct FoodLog* food_logs, int num_food_logs);
int load_profile(struct Profile* profile);
void load_logs_from_file(struct ExerciseLog* exercise_logs, int* num_exercise_logs, struct FoodLog* food_logs, int* num_food_logs);
/*Function prototypes for text-based charts*/
void display_progress_bar(const char* title, int value, int max_value);
void display_exercise_chart(const struct ExerciseLog* exercise_logs, int num_exercise_logs);
double calculate_daily_calorie_intake(const struct Profile* profile);
void view_exercise_logs(const struct ExerciseLog* exercise_logs, int num_exercise_logs);
void view_food_logs(const struct FoodLog* food_logs, int num_food_logs);
#endif

