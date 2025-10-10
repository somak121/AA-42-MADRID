#include <stdio.h>

// strchr - locate the first character c in a string

//	you need to return a pointer to the located character or null if
//		the character does not appear in the string


char	*ft_strchr(const char	*str, int	c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str ++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}		

int	main(void)
{
	printf("%s\n", ft_strchr("hola buenas", 97));
	return (0);
}
