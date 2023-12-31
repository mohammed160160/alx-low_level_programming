#ifndef main_h
#define main_h

#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);

int squareroot(int n, int y);
int primenumber(int n, int y);
int findlength(char *s, int l);

int lengthforrev(char *s, int l);
void printingrev(char *s, int l);

int is_palindrome(char *s);
int palidromecheck(char *s, int l1, int l2);
int palidromelength(char *s, int l);

int wildcmp(char *s1, char *s2);

#endif
