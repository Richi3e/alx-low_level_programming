#include "main.h"

/**
 *leet - encodes a string into 1337
 *@s: input value
 *Return: s
 */
char *leet(char *s)
{
	int string_length, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	string_length = 0;
	while (s[string_length] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[string_length])
			{
				s[string_length] = leetNums[leetCount];
			}
			leetCount++;
		}
		string_length++;
	}
	return (s);
}
