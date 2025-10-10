

#include <stdio.h>

/*  strncmp - compare strings, the function return  an integer greater than, 
		equal to, or less than 0
*/

// en el while cuando se rompa una condicion se sale del bucle
// if (i < n) cuando  un string acaba antes que el otro

int	ft_strncmp(const char	*s1, const char	*s2,size_t	n)
{
	unsigned int	i;

	i = 0;
	while ( i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_strncmp("abc", "abc", 4));
        printf("%d\n", ft_strncmp("abcd", "abc", 4));
        printf("%d\n", ft_strncmp("bbc", "abc", 4));
        printf("%d\n", ft_strncmp("abc", "a", 2));
	return (0);
}
