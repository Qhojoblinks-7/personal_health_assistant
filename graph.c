#include <stdio.h>
#include <ncurses.h>

/**
 * displayWaterIntakeChart - a function that prints the water intake chart
 * @water_intake: an array of number of intakes
 * @num_entries: number of enteries
 */


void displayWaterIntakeChart(const int water_intake[], int num_entries)
{
	initscr();/*initialize ncureses*/
	int max_water_intake = 2000; /* maximum amount of waterIntake to scale chart*/

	/*calculating the scaling facter to fit the chart in the terminal*/
	double scale_factor = (double)LINES / max_water_intake;

	/*display the water intake chart*/
	int i;
	int bar_height = 0;

	for (i = 0; i < num_entries; i++)
	{
		bar_height = (int)(water_intake[i] * scale_factor);
		mvhline(LINES - bar_height, i + 1, '@', bar_height);
	}

	/*refresh the screen to dispaly the chart*/
	refresh();

	getch(); /*waits for a key press before exiting the ncurses*/

	endwin();/*terminate ncurses*/
}
