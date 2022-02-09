#include "main.h"
/**
 * *_strstr - main function
 * @haystack: 1 vari
 * @needle: 2 vari
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}
		if (!needle[b])
		{
			return (&haystack[a]);
		}
	}
	return (NULL);
}
