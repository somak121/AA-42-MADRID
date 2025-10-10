
#include <stdio.h>

// isalnum - alphanumeric character test

int	ft_isalnum(int	c)
{
	if ((c >= 97 && c <= 122)||(c >= 65 && c <= 90)
		||(c >= '0' && c <= '9'))
		return(1);
	return(0);
}

int	main(void)
{
	printf("%d\n",ft_isalnum('H'));
	printf("%d\n",ft_isalnum('-'));
	printf("%d\n",ft_isalnum('9'));
}

