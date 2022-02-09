#includes "main.h"

/**
 * *_strpbrk - main function
 * @s: 1 vari
 * @accept: 2 vari
 * Return: accept
 */

char *_strpbrk(char *s, char *accept)
{
int a;
int b;

for (a = 0; *s != '\0'; a++)
{
	for (b = 0; accept[b] != '\0'; b++)
	{
		if (*s == accept[b])
		{
			return (s);
		}
	}
	s++;
}
return (NULL);
}
