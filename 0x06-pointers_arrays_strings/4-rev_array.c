#include "main.h"

/**
 *reverse_array - reverses the content of an array of integers
 *@a: input value
 *@n: input value
 *Return: void
 */

void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;

while (start < end)
{
int temp = a[start];
a[start] = a[end];
a[end] = temp;
start++;
end--;
}
}
