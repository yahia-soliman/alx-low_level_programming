#ifndef VAR_FUN_HEADER
#define VAR_FUN_HEADER

#include <stdarg.h>
/**
 * func - struct of printfunction according to a character
 * @c:    char data type
 * @f:    pointer to suitable function
 */
typedef struct func
{
	char c;
	void (*f)(va_list);
} func;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
