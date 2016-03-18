#include "MathIsFun.h"

#define RES_ERROR (-1)


int funPow(int x, int n, int d) {
	bool odd_power = false;
	int res = 0;

	/* Check the case where the power is 0 */
	if (n == 0)
	{
		return 1;
	}
	/* Check the case where the power is 1 */
	else if (n == 1)
	{
		res = x % d;
		if (x < 0) res += d;	/* we use different negative mod */
		return res;
	}
	/* Check Error when n is negative */
	else if (n < 0)
	{
		return RES_ERROR;
	}

	/* If the power is odd, remember that but recurse with even power */
	if (n % 2 == 1)
	{
		odd_power = true;
		n--;
	}

	/*	Recursive power */
	res = funPow(x, n/2, d);
	if (res == RES_ERROR)
	{
		return RES_ERROR;
	}

	/* x^(n/2) * x^(n/2) mod d */
	res = (res * res) % d;

	/* Consider the odd power */
	if (odd_power == true)
	{
		res = (res * x) % d;
		if (x < 0) res += d;	/* we use different negative mod */
	}

	return res;
}

int funSqrt(int x) {

	unsigned int low = 1;
	unsigned int high = x;

	unsigned int mid = 0;

	unsigned int mid_square = 0;
	unsigned int midP_square = 0;

	/* Negative numbers are not allowed */
	if (x < 0)
	{
		return RES_ERROR;
	}
	/* Square of 0 is 0 */
	else if (x == 0)
	{
		return 0;
	}

	/* Binary search, find where: (mid)^2 <= x < (mid+1)^2 */
	while (low <= high)
	{
		mid = (low + high) / 2;

		/* calc squares */
		mid_square = mid * mid;
		midP_square = mid + 1;
		midP_square = midP_square * midP_square;

		/* Check if we got the sqrt */
		if ((mid_square <= x) && (x < midP_square))
		{
			return mid;
		}
		/* If we did'nt find but finished the range, we failed */
		else if (low == high)
		{
			return RES_ERROR;
		}
		/* Change low and high according to rules of binary search */
		else if (mid_square > x)
		{
			high = mid;

		}
		else
		{
			low = mid + 1;
		}
	}

	/* If until now we didn't returned an answer, we failed */
	return RES_ERROR;
}

bool funPrimeCheck(int x) {
	//Your implementation
	//Declaration + Variabl initializing at the beginning of the function
}

bool funPalindromeCheck(int x) {
	//Your implementation
	//Declaration + Variabl initializing at the beginning of the function
}
