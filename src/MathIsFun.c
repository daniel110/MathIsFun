#include "MathIsFun.h"

#define RES_ERROR (-1)


int funPow(int x, int n, int d) {
	/* Check the case where the power is 0 */
	if (n == 0)
	{
		return 1;
	}
	/* The power should not be negative but we check it anyway
	 *  TODO: Maybe not? */
	else if (n < 0)
	{
		return RES_ERROR;
	}

	/* Multiple the base (with modulo) n times */
	while (n > 1)
	{
		x = (x * x) % d;
		n--;
	}

	return x;
}

int funSqrt(int x) {

	unsigned int count = 1;
	unsigned int square = 0;

	/* Negative numbers are not allowed */
	if (x < 0)
	{
		return RES_ERROR;
	} else if (x == 0)
	{
		return 0;
	}

	/* For every number, square it. Stop when the square is bigger than x
	 * We start with 0 because we want to check it also. */
	do
	{
		square = count * count;


		/* Overflow check */
		if ((count > 0) && (square / count != count))
		{
			break;
		}
		count++;
	} while (square < x);

	/* Return the last count number. It was the last smaller square
	 * count var here will be at least 1 so we can't return negative number */
	return count - 1;
}

bool funPrimeCheck(int x) {
	//Your implementation
	//Declaration + Variabl initializing at the beginning of the function
}

bool funPalindromeCheck(int x) {
	//Your implementation
	//Declaration + Variabl initializing at the beginning of the function
}
