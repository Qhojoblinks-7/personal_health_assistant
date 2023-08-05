# Personal Health Assistant

The Health Assistant is a simple text-based program that helps users monitor their health and fitness progress. It allows users to create a profile, log their exercise and food intake, calculate their Body Mass Index (BMI), and get personalized recommendations for a healthy lifestyle.

## Features

1. **Create Profile**: The program allows users to create a profile by providing their name, age, gender, weight, and height.

2. **Calculate BMI**: After creating a profile, the program automatically calculates the user's Body Mass Index (BMI) based on their weight and height.

3. **Log Exercise**: Users can log their exercise activities, including the activity name, duration, and intensity.

4. **Log Food Intake**: Users can log their food intake, including the name of the food and its calorie count.

5. **View Exercise Logs**: Users can view a summary of their exercise logs, including the total number of logs and the details of each log.

6. **View Food Logs**: Users can view a summary of their food logs, including the total number of logs and the details of each log.

7. **Display Exercise Chart**: The program displays a line chart showing the user's exercise progress over time.

8. **Calculate Daily Calorie Intake**: The program calculates the user's recommended daily calorie intake based on their profile and activity level.

9. **Display Progress Bar**: Users can see their daily calorie intake represented as a progress bar, making it easier to visualize their progress towards their goal.

10. **Display Nutritional Habits**: The program provides users with information about their nutritional habits based on their food logs.

11. **Provide Exercise Recommendations**: Users receive personalized exercise recommendations based on their BMI and fitness goals.

12. **Display Educational Content**: Users can access educational content on various health and fitness topics.

## Usage

1. **Compile the Program**: Before running the program, compile it using the following command:

   ```bash
   gcc -Wall -Wextra -std=c99 -o health_assistant main.c calculate_bmi.c classify_health_status.c create_profile.c daily_calorie_intake.c display_educational_content.c display_exercise_chart.c display_food_chart.c display_fitness_progress.c display_line_chart.c display_nutritional_habits.c exercise_recommendations.c log_exercise.c log_food.c load_logs_from_file.c save_logs_to_file.c view_exercise_logs.c view_food_logs.c welcome.c -lm -lncurses
   ```
   or after cloning the repo u can use the make command since the repo contains a Makefile.

   Note: Make sure you have the ncurses library installed on your system.

2. **Run the Program**: Execute the program with the following command:

   ```bash
   ./health_assistant
   ```

3. **User Interaction**: The program will display a simple text-based user interface using ncurses. Use the arrow keys or other function keys to interact with the interface and select various options provided by the program.

4. **Create Profile**: Follow the on-screen prompts to create your profile by entering your name, age, gender, weight, and height.

5. **Log Exercise and Food Intake**: Log your exercise activities and food intake to keep track of your fitness progress.

6. **View Logs**: You can view a summary of your exercise and food logs to review your past data.

7. **Calculate BMI**: The program will automatically calculate your BMI based on your weight and height.

8. **Daily Calorie Intake**: Get information about your recommended daily calorie intake based on your profile and activity level.

9. **Nutritional Habits**: The program provides feedback on your nutritional habits based on your food logs.

10. **Exercise Recommendations**: Receive personalized exercise recommendations to achieve your fitness goals.

11. **Educational Content**: Access educational content on various health and fitness topics.

12. **Exit**: To exit the program, use the provided option in the menu.

## Note

This program is a simple health assistant and should not be considered a substitute for professional medical advice. It is meant for educational purposes and to help users monitor their health and fitness progress.

## Contributors

This project was created by Immanuel Eshun Quansah and is open for contributions. Feel free to fork the repository and submit pull requests with improvements or new features.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---
