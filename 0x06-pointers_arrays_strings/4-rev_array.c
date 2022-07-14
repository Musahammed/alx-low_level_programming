#include "main.h"
/**
 * reverse_array - reversing and array
 * @a: array a
 * @n: an element of an array
 * Return:
 */
void reverse_array(int *a, int n)
{
int *p, aux, i, k;

p = a;
for (i = 0; i < n; i++)
p++;
for (k = 0; k < n / 2; k++)
{i
aux = a[k];
a[k] = *p;
*p = aux;
p--;
}
}
