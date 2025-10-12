

#include "libft.h"

/* striteri - For each character in the string 's', apply the function 'f', 
giving as parameters the index of each character within 's' and the address of the 
character itself, which can be modified if necessary. */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

