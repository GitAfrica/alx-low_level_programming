#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: entire string
 * @needle: substring to be located
 * Return: if substring is located - poiter to the beginning
 * if the substring is not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
	{
		haystack++;
		pneedle++;
	}
	if (!*pneedle)
		return (bhaystack);
	haystack = bhaystack + 1;
}
return (0);
}
