#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "health.h"
#include <timer.h>

/**
 * startCountdownTimer - a function that counts the time duration
 * during exercise.
 * @duration: time duration
 */

void startCountdownTimer(int duration)
{
	int remaining_time = duration;

	while (remaining_time >= 0)
	{
		printf("Time remaining: %02d:", remaining_time / 60);
		printf("%02d\n", remaining_time % 60);
		sleep(1); /* wait for 1 second*/
		remaining_time--;
	}
	beep(); /*sound alert when the time is up*/
}
