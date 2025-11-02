

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
#include <stdarg.h>

// Principal functions
int	ft_print_percent(void);
int	ft_print_format(char spec, va_list args);

// Functions for printing
int	ft_printf_char(char c); // %c
int	ft_print_str(char *s);                   // %s
int	ft_print_int(int n);                      // %d & %i
int	ft_printf_int_unsigned(unsigned int n);         // %u
int	ft_print_hex(unsigned long n, int uppercase); // %x & %X
int	ft_print_ptr(void *ptr);                 // %p

// Auxiliar functions
void	ft_putnbr_print(long n);
void	ft_putnbr_print_unsigned(unsigned int n);
#endif