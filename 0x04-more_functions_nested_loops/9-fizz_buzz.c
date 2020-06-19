#include <stdio.h>

/**
*main - main function
*
*Return: Always 0 (Success)
*/

int main(void)
{
int i;
int n = 0;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
			n = 1;
		}
		if ((i % 3 != 0) && (i % 5 != 0) && (n == 0))
		{
			printf("%d ", i);
			n = 0;
		}
		if ((i % 3 == 0) && (n == 0))
		{
			printf("Fizz ");
		}
		if ((i % 5 == 0) && (n == 0))
		{
			if (i == 100)
			{
			printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		n = 0;
	}
return (0);
}
