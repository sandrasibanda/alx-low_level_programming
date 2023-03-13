#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s: input one to concat
 * @s1: input two to concat
 * Return: concat of s and s1
 */
char *str_concat(char *s, char *s1)
{
	char *conct;
	int i, j;

	if (s == NULL)
		s = "";
	if (s1 == NULL)
		s1 = "";

	i = j = 0;
	while (s[i] != '\0')
		i++;
	while (s1[j] != '\0')
		j++;
	conct = malloc(sizeof(char) * (i + j + 1));

	if (conct == NULL)
		return (NULL);
	i = j = 0;
	while (s[i] != '\0')
	{
		conct[i] = s[i];
		i++;
	}

	while (s1[j] != '\0')
	{
		conct[i] = s1[j];
		i++, j++;
	}
	conct[i] = '\0';
	return (conct);
}
