#include "main.h"
/**
* _islower - (inct c)
* @c: C is the integer
* Return: is (0)
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
