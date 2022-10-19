#include "main.h"
#include <stdio.h>



/**
 *   positive_or_negative - prints the sign of a number
 *
 *   @n: positive, zero or negative integer
 *
 *   Return: 1 if it's positive, 0 if it's negative and -1 if it's negative
 *
 */


int positive_or_negative(int n)

{

	if (n > 0)

	{

		printf("%s is %s", "+", "positive\n");

		return (1);

	}

	else if (n < 0)

	{

		printf("%s is %s", "-", "negative\n");

		return (-1);

	}

	else

	{

		printf("%d is %s", 0, "zero\n");

		return (0);

	}

}
