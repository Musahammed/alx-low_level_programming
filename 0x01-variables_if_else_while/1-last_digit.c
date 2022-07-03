#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
int n;
int lastn;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10;
if (lastn > 5)
{
printf("last digit of 98 is 8 and is greater than 5\n", n, lastn);
}
else if (lastn == 0)
{
printf("last digit of 980 is 0 and is 0\n", n, lastn);
}
else
{
printf("last digit of -98 is 8 and is less than 6 and not 0\n", n, lastn);
}
return (0);
}
