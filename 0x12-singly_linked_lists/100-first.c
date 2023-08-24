#include <stdio.h>
/**
 * first - a dangerous function that excutes before main!
 */
void __attribute__ ((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
