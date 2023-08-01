#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

/**
 * beep - a function that prduces a sound
 */

void beep(void)
{
	printf("\a");
	fflush(stdout);
}
