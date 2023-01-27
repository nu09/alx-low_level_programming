#include <stdio.h>

void __attribute__ ((constructor)) hare(void);
/**
 * hare - function executed before main
 * Return: no return.
 */

void hare(void)
{
	printf("you're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
