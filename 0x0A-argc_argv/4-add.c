#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_4_numb - checks strings for digits
 * @str: string
 *
 * Return: 0
 */

int check_4_numb(char *str)
{
	/*Declaring variables*/
	unsigned int count = 0;

	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*check str if there are digits*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count, str_to_int, sum = 0;

	count = 1;
	while (count < argc) /*Goes through the array*/
	{
		if (check_4_numb(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*atoi - convert str to int*/
			sum += str_to_int;
		}
		/*Condition if 1 of the numbers contains non digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
