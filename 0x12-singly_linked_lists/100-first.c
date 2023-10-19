#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
<<<<<<< HEAD
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
=======
 printf("You're beat! and yet, you must allow,\n");
 printf("I bore my house upon my back!\n");
>>>>>>> 9b30ec1f79ec3ef9f9d1a3c5321a4b2005ed732a
}
