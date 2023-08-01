#include <stdio.h>
#include "health.h"

/**
 * logWaterIntake - a function that tracks the water intake of the user
 * @num_entries: number of enteries
 * @water_data: water data
 */

void logWaterIntake(struct WaterIntake water_data[], int num_entries)
{
	FILE *waterLog;

	waterLog = fopen("water_intake_data.csv", "a");

	if (waterLog != NULL)
	{
		fprintf(waterLog, "Water Intake (ml),Time\n");
		for (int i = 0; i < num_entries; i++)
		{
			fprintf(waterLog, "Amount: %d ml,", water_data[i].amount);
			fprintf(waterLog, " Time: %s\n", water_data[i].time);
		}
		fclose(waterLog);
		printf("Water intake data written to water_intake_data.csv successfully.\n");

		printf("Time to drink water:\n");
		waterIntakeReminder(60);/* Set the reminder interval to 60 minutes*/
	}
	else
	{
		printf("Error: Unable to log water intake data.\n");
	}
}
