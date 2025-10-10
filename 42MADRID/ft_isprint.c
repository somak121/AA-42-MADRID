
#include <stdio.h>

// isprint - tests for any printing character, including space (' ')
//		return 1 if test is positive and 0 is test is negative

int	ft_isprint(int	c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isprint('d'));
        printf("%d\n", ft_isprint(' '));
        printf("%d\n", ft_isprint(7));
        printf("%d\n", ft_isprint(45));
}

