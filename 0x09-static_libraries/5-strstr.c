#include <stdlib.h>
#include "main.h"
/**
 * _strstr - locates  a substring
 * @haystack: entire string to search
 * @needle: substring to search
 * Return: a pointer to the beginning of located substring
 * NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
