#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void floatprint(void *x);
void stringprint(void *x);
void characterprint(void *x);
void integerprint(void *x);


/**
 * struct letters - decided depending on the letter which identifier to use
 * @c: The indentifier
 * @f: The function associated
 */

typedef struct letters
{
	char *c;
	void (*f)(void *);
} printer;

#endif
