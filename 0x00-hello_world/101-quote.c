#include<unistd.h>
/*
 * main - writing a string
 * Description - writing a string of text without printf
 * or puts
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}

