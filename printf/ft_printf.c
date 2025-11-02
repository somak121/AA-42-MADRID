#include "printf.h"


int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_print_format(format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}


int	ft_print_format(char spec, va_list args)
{
	if (spec == 'c')
		return (ft_printf_char(va_arg(args, int)));
	else if (spec == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (spec == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (spec == 'd' || spec == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (spec == 'u')
		return (ft_printf_int_unsigned(va_arg(args, unsigned int)));
	else if (spec == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	else if (spec == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	else if (spec == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}
