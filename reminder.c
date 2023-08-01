#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "health.h"

/**
 * waterIntakeReminder - water intake reminder
 * @interval: time interval
 */

void waterIntakeReminder(int interval)
{
	while (1)
	{
		printf("Time to drink water!\n");
		beep();/* alert for water*/
		sleep(interval * 60); /*wait for the specified interval in minutes*/
	}
}
