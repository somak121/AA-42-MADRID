#include <stdio.h>

// isdigit,  isnumber - decimal digit character test

int	ft_isdigit(int	c)
{
	if (c >= '0' && c <= '9')
		return(1);
	return(0);
}

int	main(void)
{
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", ft_isdigit('a'));
}
