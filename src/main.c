/*
 * main.c
 *
 *  Created on: Mar 18, 2016
 *  Authors: 1) dormendil ; Dor Mendil ; 200968873
 * 			 2) danielf1 ; Daniel Feldman ; 302575436
 */

#include <stdio.h>
#include <stdlib.h>

#include "MathIsFun.h"

/*
void checkPoli()
{
	int a[12] = {-1,-100,10,1000,12343321,123311,  5444445,1005001, 0, 5, 123321,11};
	for (int i=0;i<12; i++)
	{
		printf("%d - %s\n", i, funPalindromeCheck(a[i]) ? "true" : "false");
	}
} */


/*	Defines */
#define WELCOME_MESSAGE ("Welcome to Math Is Fun - beta version\nSupported operations are:\n1 - " \
							"Power Calculation\n2 - Prime Check\n3 - Palindrome Check\nPlease enter " \
							"operation number (1/2/3): \n")
#define RESULT_PREFIX_STRING ("res = ")
#define RESULT_FALSE_STRING ("false")
#define RESULT_TRUE_STRING ("true")

/*	Input option numbers enum */
enum FunctionID
{
	POWER=1,
	PRIME=2,
	POLI=3
};


int main()
{
	int operationID = 0;
	int res = 0;
	int num = 0;

	int power = 0;
	int mod = 0;

	/* disable stdout buffer - caused problem with scanf after printf*/
	setbuf(stdout, NULL);

	/*	Print welcome and instructions */
	printf(WELCOME_MESSAGE);

	/*	Get operation number from user */
	if (1 !=  scanf("%d", &operationID))
	{
		return EXIT_FAILURE;
	}

	switch(operationID)
	{
	case POWER:
		{
			printf("Please enter three space separated numbers: \n");
			if (3 !=  scanf("%d %d %d", &num, &power, &mod))
			{
				return EXIT_FAILURE;
			}

			res = funPow(num, power, mod);
			printf("%s%d\n", RESULT_PREFIX_STRING, res);
			break;
		}
	case PRIME:
		{
			printf("Please enter an integer: \n");
			if( 1 != scanf("%d", &num))
			{
				return EXIT_FAILURE;
			}

			res = funPrimeCheck(num);
			printf("%s%s\n", RESULT_PREFIX_STRING,  res ? RESULT_TRUE_STRING : RESULT_FALSE_STRING);
			break;
		}
	case POLI:
		{
			printf("Please enter an integer: \n");
			if( 1 !=  scanf("%d", &num))
			{
				return EXIT_FAILURE;
			}

			res = funPalindromeCheck(num);
			printf("%s%s\n", RESULT_PREFIX_STRING, res ? RESULT_TRUE_STRING : RESULT_FALSE_STRING);
			break;
		}
	default:
		{
			/* do nothing?? */
		}
	}



	return EXIT_SUCCESS;
}

