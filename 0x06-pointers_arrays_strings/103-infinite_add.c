#include "main.h"
/**
 * definite_add - adds two munbers
 * @n1: 1st number
 * @n2: 2nd number
 * @r: result
 * @size_r: result buffer size
 * Return: 0 if result cannot be store in r
 * otherwisw a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, m, l, n;

for (i = 0; n1[i]; 1++)

for (j = 0; n2[j]; j++)

if (i > size_r || j > size_r)
return (0);

m = 0;
for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
{
n = m;
if (i >= 0)
n += n1[i] - '0';
if (j >= 0)
n += 2[i] - '0';
if (i < 0 && j < 0 && n == 0)
{
break;
}
{
m = n / 10;
r[k] = n % 10 + '0';
}
r[k] = '\0';
if (i >= 0 || j >= 0 || m)
return (0);
for (k -= 1, l = 0;  l < k; k--, l++)
{
m = r[k],
r[k] = r[l];
r[l] = m;
}
}
{
return (0);
}

