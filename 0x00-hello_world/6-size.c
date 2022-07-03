#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	long int l;
	long long int ll;
	float d;
	char c;

	printf("Size of char: %lu 1 byte(s).\n", sizeof(c));
	printf("Size of an int: %lu 4 byte(s).\n", sizeof(i));
	printf("Size of a long int: %lu 4 byte(s).\n", sizeof(l));
	printf("Size of a long long int: %lu 8 byte(s).\n", sizeof(ll));
	printf("Size of a float: %lu 4 byte(s).\n", sizeof(d));
	return(0);
}
