#include <stdio.h>
#include "main.h"

/**
 * main - fizz_buzz test.
 * Return: 0.
 */

int main(void)
{
	int i;

        for (i = 1; i <= 100; i++)
        {
                if (i % 15 == 0)
                        printf("Fizz Buzz ");
                else if (i % 3 == 0)
                        printf("Fizz ");
                else if (i % 5 == 0)
                        printf("Buzz ");
                else
                        printf("%d ", i);
        }
        printf("\n");
	return (0);
}
