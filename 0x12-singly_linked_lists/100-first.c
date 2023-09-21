#include <stdio.h>

/**
 * pre_main - This function prints a line before the main function is
 * executed
 * Return: Nothing
 */

__attribute__((constructor))void pre_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
