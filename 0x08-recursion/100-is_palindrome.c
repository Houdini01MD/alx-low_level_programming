#include <stdio.h>
#include "main.h"

/**
 * str_length - Helper function to calculate the length of the string
 * @s: the string
 * Return: int
*/
int str_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + str_length(s + 1));
}

/**
 * is_palindrome_recursive - Helper function to check if a palindrome
 * @s: the string
 * @start: variable type int
 * @end: variable type int
 * Return: int
*/
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - function to check if a string is a palindrome
 * @s: the string
 * Return: int
*/
int is_palindrome(char *s)
{
	int length;

	if (!s || !s[0])
		return (1);
	length = str_length(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
