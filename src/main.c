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
	int functionID;

	/* disable stdout buffer - caused problem with scanf after printf*/
	setbuf(stdout, NULL);

	printf("Welcome to Math Is Fun - beta version\nSupported operations are:\n1 - "
			"Power calculation\n2 - Prime test\n3 - Palindrome test\nPlease enter operation number (1/2/3):");

	scanf("%d", &functionID);

	switch(functionID)
	{
	case POWER:
		{
			int num,power,mod;
			scanf("%d %d %d", &num, &power, &mod);

			break;
		}
	case PRIME:
		{
			int num;
			scanf("%d", &num);

			break;
		}
	case POLI:
		{
			int num;
			scanf("%d", &num);

			break;
		}
	default:
		{
		//TODO
		}
	}

	return EXIT_SUCCESS;
}

