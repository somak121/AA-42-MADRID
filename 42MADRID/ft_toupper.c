


#include <stdio.h>

// toupper -  lower case to upper case letter conversion

char	ft_toupper(int	c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(void)
{
	printf("%c\n", ft_toupper('a'));
        printf("%c\n", ft_toupper('9'));        
	printf("%c\n", ft_toupper('n'));
}
