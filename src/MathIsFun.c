#include "MathIsFun.h"

/*
 * Calculates the largest integer less or equal than the square root of x.
 * funSqrt(10) = 3
 * funSqrt(16) = 4
 * @param x - An integer for which the function applies
 * @return the value of |_sqrt(x)_|, if x is negative then the function
 * returns -1.
 */
int funSqrt(int x); // ==> Declaration is always in the beginning of the file.

int funPow(int x, int n, int d) {
	//Your implementation
	//Declaration + Variabl initializing at the beginning of the function
}

int funSqrt(int x) {
	//Your implementation
	//Declaration + Variabl initializing at the beginning of the function
}

bool funPrimeCheck(int x) {
	//Your implementation
	//Declaration + Variabl initializing at the beginning of the function
}

bool funPalindromeCheck(int x)
{
	const int base = 10;
	int leftDigitDiv = 1;

	int xHelper = x;
	int numberSize = 0;

	if (x < 0)
	{
		return false;
	}

	// check x size, and update leftDigitDiv
	while(xHelper > 0)
	{
		xHelper /= base;
		leftDigitDiv *= 10;

		numberSize++;
	}
	leftDigitDiv /= 10;

	for (int i = 0, j=numberSize-1; i<j; i++,j--)
	{
		int rightDigit = (x % base);
		int leftDigit = x / leftDigitDiv;
		if (leftDigit != rightDigit)
		{
			return false;
		}

		leftDigitDiv = leftDigitDiv / 10;
		x = (x / base) % leftDigitDiv;

		leftDigitDiv = leftDigitDiv / 10;
	}

	return true;

}

