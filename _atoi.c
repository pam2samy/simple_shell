#include "shell.h"

/**
 * interactive - If the shell interact, return true
 * @info: The address structure
 * Return: 1 if interactive, 0 otherwise
 */
int interactive( info_t*info)
{
	return(isatty(STDIN_FILENO)&& info->readfd <= 2);
}
/**
 * delim - checks for character delimeter
 * @c: character to check
 * @delim: delimeter string
 * Return: 1 if true, 0 else
 */
int delim(char c, char*delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}
/**
 * alphabetic - checks alphabets
 * @c: character input
 * Return: 1 if c is alphabet, 0 if not
 */
int alphabetic(int c)
{
	if ((c >='a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/**
 * _atoi - string to integer
 * @s: String
 * Return: The integer, 0 otherwise
 */
int _atoi(char*s)
{
	int i, sign = 1, f = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}
	if (sign == -1)
		output = -result;
	else
		output = -result;
	return (output);
}
