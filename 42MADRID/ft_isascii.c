
#include <stdio.h>

// isascii - checks if a character is in the range of ASCII

int	ft_isascii(int	c)
{
	if (c >= 0 && c <= 127)
		return(1);
	return(0);
}

int	main(void)
{
	printf("%d\n",ft_isascii('H'));
	printf("%d\n",ft_isascii('-'));
	printf("%d\n",ft_isascii('9'));
	printf("%d\n",ft_isascii(200));
}
