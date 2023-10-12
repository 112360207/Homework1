#include <stdio.h>
int main()
{
	int a;
	for (a = 1; a <= 9; a++)
	{
		printf("* ");
	}
	printf("\n");
	for (a = 1; a <= 7; a++)
	{
		printf("*               *\n");
	}
	for (a = 1; a <= 9; a++)
	{
		printf("* ");
	}

	printf("\n\n      * * *      \n");
	printf("    *       *       ");
	for (a = 1; a <= 5; a++)
	{
		printf("\n  *           *\n");
	}
	printf("\n    *       *       ");
	printf("\n      * * *      \n\n");

	printf("        *\n");
	printf("       ***\n");
	printf("      *****\n");
	for (a = 1; a <= 6; a++)
	{
		printf("        *\n");
	}

	printf("\n        *\n");
	printf("       *  *\n");
	printf("      *    *\n");
	printf("     *      *\n");
	printf("    *        *\n");
	printf("     *      *\n");
	printf("      *    *\n");
	printf("       *  *\n");
	printf("         *\n");
}
