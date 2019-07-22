#include <stdio.h>
#include <stdlib.h>
#ifndef __FILE__
#define __FILE__
#endif

/**
 * main - prints name of this file being compiled
 *
 * Return: On success 1.
 *
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
