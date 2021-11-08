#include "main.h"
#include <unistd.h>


/**
 * pchr - print char arg
 * @ap: arg
 *
 **/
char *pchr(va_list ap)
{
	char *s;

	s = malloc(sizeof(char) * 2);

	s[0] = va_arg(ap, int);
	s[1] = '\0';

	return  (s);

}

/**
 * pstr - print string arg
 * @ap: arg
 *
 **/
char *pstr(va_list ap)
{
	char *s;
	int l;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(null)";


	return (s);
}

/**
 * pint - print int arg
 * @ap: arg
 *
 **/
char *pint(va_list ap)
{
	char *s;
	int d;

	d = va_arg(ap, int);
	return (itoa(d));
}

/**
 * pflt - print float arg
 * @ap: arg
 *
 **/
/* void pflt(va_list ap) */
/* { */
/* } */
