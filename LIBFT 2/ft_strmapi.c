

#include "libft.h"

/* strmapi - Applies the function 'f' to each character in the string 's', 
passing its index as the first argument and the character itself as the second. 
A new string is created (using malloc(3)) to collect the results of successive applications of 'f'.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char    *str;
	size_t  i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

