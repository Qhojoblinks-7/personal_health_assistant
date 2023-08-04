#include <stdio.h>
#include "health.h"
#include <ncurses.h>

/**
 * classify_health_status - a function that classifies the health
 * status of the user based on the BMI
 * @bmi: the number to use
 */

void classify_health_status(double bmi)
{
	/*Initialize ncurses window*/
	initscr();
	cbreak();/*line buffering disabled*/
	noecho();/*dont echo user input*/
	keypad(stdscr, TRUE);/*Eneable function key*/
	curs_set(0); /*hide the cursor*/

	/*Define the window dimensions and position*/
	int window_height = 10;
	int window_width = 60;
	int window_y = (LINES - window_height) / 2;/*Center vertical*/
	int window_x = (COLS - window_width) / 2; /*cnter horizontally*/

	/*Create a new ncurses window*/
	WINDOW* health_status_win = newwin(window_height, window_width, window_y, window_x);
	box(health_status_win, 0, 0);

	/*Print the health status to the window*/
	mvwprintw(health_status_win, 1, 1, "Health Status Classification");
	mvwprintw(health_status_win, 2, 1, "BMI: %.2f", bmi);
	
	/*Classify the health status based on BMI value*/

	if (bmi < 18.5)
	{
		mvwprintw(health_status_win, 4, 1, "BMI Category: Underweight");
		mvwprintw(health_status_win, 6, 1, "Recommendations:");
		mvwprintw(health_status_win, 7, 1, "- Increase caloric intake to gain weight in a healthy way.");
		mvwprintw(health_status_win, 8, 1, "- Focus on nutrient-dense foods, such as nuts, avocados, and lean proteins.");
		mvwprintw(health_status_win, 9, 1,"- Incorporate strength training exercises to build muscle mass.");
	}
	else if (bmi >= 18.5 && bmi < 24.9)
	{
		mvwprintw(health_status_win, 4, 1, "BMI Category: Normal Weight.");
		mvwprintw(health_status_win, 6, 1, "Recommendations:");
		mvwprintw(health_status_win, 7, 1, "- Maintain a balanced diet with a variety of fruits, vegetables, and whole grains.");
		mvwprintw(health_status_win, 8, 1, "- Engage in regular physical activity, such as aerobic exercises and strength training.");
		mvwprintw(health_status_win, 9, 1, "- Get enough sleep and manage stress levels.");
	}
	else if (bmi >= 25 && bmi < 29.9)
	{
		mvwprintw(health_status_win, 4, 1, "BMI Category: Overweight");
		mvwprintw(health_status_win, 6, 1, "Recommendations:");
		mvwprintw(health_status_win, 7, 1, "- Focus on portion control and mindful eating to manage weight.");
		mvwprintw(health_status_win, 8, 1, "- Increase physical activity, such as walking, cycling, or swimming.");
		mvwprintw(health_status_win, 9, 1, "- Reduce consumption of sugary drinks and processed foods.");
	}
	else
	{
		mvwprintw(health_status_win, 4, 1, "BMI Category: Obese");
		mvwprintw(health_status_win, 6, 1, "Recommendations:");
		mvwprintw(health_status_win, 7, 1, "- Seek professional advice and guidance for a personalized weight management plan.");
		mvwprintw(health_status_win, 8, 1, "- Gradually incorporate moderate-intensity exercises into your routine.");
		mvwprintw(health_status_win, 9, 1, "- Make long-term lifestyle changes, including a balanced diet and regular exercise.");
	}
	/*Print an informative message*/
	mvwprintw(health_status_win, 11, 1, "Press any key to continue...");

	/*Refresh the window to display the changes*/
	wrefresh(health_status_win);

	/*Wait for user input before exiting the function*/
	getch();

	/*Clean up the window and ncurses*/
	delwin(health_status_win);
	endwin();
}
