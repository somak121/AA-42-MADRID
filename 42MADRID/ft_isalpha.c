#include <stdio.h>
// isalpha - alphabetic character test

int	ft_isalpha(int	c)
{
	if ((c >= 97 && c <= 122)||(c >= 65 && c <= 90))
	{
		return(1);
	}
	return(0);
}

int	main(void)
{
	printf("%d\n",ft_isalpha('H'));
	printf("%d\n",ft_isalpha('-'));
	printf("%d\n",ft_isalpha('9'));
}
