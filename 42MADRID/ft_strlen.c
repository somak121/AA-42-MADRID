
#include <stdio.h>

//  strlen - number of the length of the string


int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count ++;
		str++;
	}
	return (count);	
}

int	main(void)
{
	printf("%d\n", ft_strlen("hola"));
        printf("%d\n", ft_strlen("hola hola"));
        printf("%d\n", ft_strlen(""));
	return (0);
}
