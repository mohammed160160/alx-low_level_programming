#include<stuio.h>
/**
 * main - writing the size for each variable
 * Description - this is a script to write the size of
 * each variable
 * Return= 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf:("size of a char %i byte\n", sizeof(a));
	printf: ("size of a int %i byte\n", sizeof(b));
	printf: ("size of a long int %i byte\n", sizeof(c));
	printf: ("size of a long long int %i byte\n", sizeof(d));
	printf: ("size of a float %i byte\n", sizeof(e));
	return (0);
}
