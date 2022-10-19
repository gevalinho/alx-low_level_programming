#include "main.h"



/**
 * jack_bauer - prints every minute of the day
 *
 *  Return: void
 *
 */



void jack_bauer(void)

{

	int day = 0;

	int morning = 0, afternoon = 0, evening = 0, night = 0;



	while (day < 1440)

	{

		_putchar(morning + '0');

		_putchar(afternoon + '0');

		_putchar(':');

		_putchar(evening + '0');

		_putchar(night + '0');

		_putchar('\n');



		night++;

		if (night > 9)

		{

			night = 0;

			evening++;

		}

		if (evening > 5)

		{

			evening = 0;

			afternoon++;

		}

		if (afternoon > 9)

		{

			afternoon = 0;

			morning++;

		}

		day++;

	}

}
