

#include <stdio.h>

// tolower -  upper case to lower case letter conversion

char    ft_tolower(int  c)
{
        if (c >= 'A' && c <= 'Z')
                c += 32;
        return (c);
}

int     main(void)
{
        printf("%c\n", ft_tolower('Z'));
        printf("%c\n", ft_tolower('9'));
        printf("%c\n", ft_tolower('n'));
}
