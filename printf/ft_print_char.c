
#include "printf.h"

int ft_printf_char(char c)
{
    write(1, &c,1);
    return (1);
}


int ft_print_str(char *str)
{
    unsigned int    i;

    if (!str)
        str = "(null)";
    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

