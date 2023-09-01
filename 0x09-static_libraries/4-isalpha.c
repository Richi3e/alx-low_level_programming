#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: input value,character to be checked
 * Return: 1 (c = letter), 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
