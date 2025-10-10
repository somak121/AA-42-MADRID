


#include <stdio.h>

// strrchr - locate the last occurance of c and return the pointer
//		to the located character or NULL if the character 
//		does not appear in the string

char	*ft_strrchr(const char	*str, int	c)
{
	const char	*final;

	final = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			final = str;
		str ++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *)final);
}


#include <stdio.h>

int	main(void)
{
        printf("%s\n", ft_strrchr("hola buen", 97));
	printf("%s\n", ft_strrchr("hola buenas", 97));
        printf("%s\n", ft_strrchr("hol buens", 97));
	return (0);
}

