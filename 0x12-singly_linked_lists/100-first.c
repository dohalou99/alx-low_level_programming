#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Write a function that prints somthing
 * function is executed
 */
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

