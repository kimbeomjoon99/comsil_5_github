#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char x, y, g, z;
	double a, b;

	printf("Enter first variable assignment : ");
	scanf("%c %c %lf", &x, &g, &a);
	rewind(stdin);

	printf("Enter second variable assignment : ");
	scanf("%c %c %lf", &y, &g, &b);
	rewind(stdin);
	
	if (x == y)
	{
		printf("The first variable and the second variavle are the same!!.");
	}
	else
	{
		printf("***********************************************************\n");
		printf("Enter a math expression using two variables : ");
		scanf("%c %c %c", &x, &z, &y);
		rewind(stdin);

		switch (z)
		{
		case '+':
			printf("\n");
			printf(">>>>>>>>>> Result : %c %c %c = %.2lf", x, z, y, (a + b));
			break;
		case '-':
			printf("\n");
			printf(">>>>>>>>>> Result : %c %c %c = %.2lf", x, z, y, (a - b));
			break;
		case '*':
			printf("\n");
			printf(">>>>>>>>>> Result : %c %c %c = %.2lf", x, z, y, (a * b));
			break;
		case '/':
			switch ((int)b)
			{
			case 0:
				printf("Can't be divided into zero");
				break;
			default:
				printf("\n");
				printf(">>>>>>>>>> Result : %c %c %c = %.2lf", x, z, y, (a / b));
				break;
			}
			break;
		default:
			printf("%c is unacceptable operator.", z);
			break;
		}
	}

	return;
}