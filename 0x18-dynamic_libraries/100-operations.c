#include <stdio.h>

/**
* add - add two number
* @a: int number
* @b: int number
* Return: a + b
*/
int add(int a, int b)
{
	return (a + b);
}

/**
* sub - sub two number
* @a: int number
* @b: int number
* Return: a - b
*/
int sub(int a, int b)
{
	return (a - b);
}

/**
* mul - mul two number
* @a: int number
* @b: int number
* Return: a * b
*/
int mul(int a, int b)
{
	return (a * b);
}

/**
* div - div two number
* @a: int number
* @b: int number
* Return: a / b
*/
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		fprintf(stderr, "Error: Division by zero\n");
		return (0);
	}
}

/**
* mod - mod two number
* @a: int number
* @b: int number
* Return: a % b
*/
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		return (0);
	}
}
