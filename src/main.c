/*
 * main.c
 *
 *  Created on: Mar 18, 2016
 *  Authors: 1) dormendil ; Dor Mendil ; 200968873
 * 			 2) danielf1 ; Daniel Feldman ; 302575436
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MathIsFun.h"


void checkPoli()
{
	int a[12] = {-1,-100,10,1000,12343321,123311,  5444445,1005001, 0, 5, 123321,11};
	for (int i=0;i<12; i++)
	{
		/*0-5 false, 6-11 true */
		printf("%d - %s\n", i, funPalindromeCheck(a[i]) ? "true" : "false");
	}

}


enum FunctionID{POWER=1, PRIME=2, POLI=3};


int main(int argc, char** argv)
{
	char* resStr = "res = ";
	int functionID, res,num;

	/* disable stdout buffer - caused problem with scanf after printf*/
	setbuf(stdout, NULL);

	printf("Welcome to Math Is Fun - beta version\nSupported operations are:\n1 - "
			"Power calculation\n2 - Prime test\n3 - Palindrome test\nPlease enter operation number (1/2/3):\n");

	scanf("%d", &functionID);

	switch(functionID)
	{
	case POWER:
		{
			int power,mod;

			printf("Please enter three space separated numbers:\n");
			scanf("%d %d %d", &num, &power, &mod);

			res = funPow(num, power,mod);
			printf("%s%d\n", resStr, res);
			break;
		}
	case PRIME:
		{
			printf("Please enter an integer:\n");
			scanf("%d", &num);

			res = funPrimeCheck(num);
			printf("%s%s\n", resStr,  res ? "true" : "false");
			break;
		}
	case POLI:
		{
			printf("Please enter an integer:\n");
			scanf("%d", &num);

			res = funPalindromeCheck(num);
			printf("%s%s\n", resStr, res ? "true" : "false");
			break;
		}
	default:
		{
			/* do nothing?? */
		}
	}



	return EXIT_SUCCESS;
}

