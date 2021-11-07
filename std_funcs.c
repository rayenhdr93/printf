#include "main.h"
#include <stdlib.h>

/**
 * _strlen - get length of string
 *
 * @s: string
 *
 * Return: length
 **/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copy a string to another string
 *
 * @dest: destination
 * @src: source
 *
 * Return: pointer string
 **/
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = _strlen(src);

	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}


	return (src);
}


char *_itoa(int d)
{
	char *s;
	int b = d, l = 0, i;

	if (d == 0)
	{
		s = malloc(sizeof(char) * 2);
		if (s == NULL)
			return (NULL);

		s[0] = '0';
		s[1] = '\0';
		return (s);
	}

	while (b != 0)
	{
		b /= 10;
		l++;
	}


	s = malloc(sizeof(char) * (l + 1));
	if (s == NULL)
		return (NULL);

	while (d != 0)
	{
		s[i] = (d % 10) + '0';

		d /= 10;
		i++;
	}

	return (s);
}
