#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - Struct op
 *
 * @The character: The operator
 * @f: The function associated
 */


void floatprint(void *f);
void stringprint(void *s);
void characterprint(void *c);
void integerprint(void *i);




typedef struct letters
{
    char *c;
    void (*f)(void*);
} printer;




#endif
