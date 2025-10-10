/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:50:27 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/10 16:04:14 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* strnstr - locate a substring in a string

	 The strnstr() function locates the first occurrence of the null-
	 terminated string needle in the string haystack, where not more than len
	 characters are searched.  Characters that appear after a ‘\0’ character
	 are not searched.  Since the strnstr() function is a FreeBSD specific
	 API, it should only be used when portability is not a concern.

If needle is an empty string, haystack is returned; if needle occurs
	 nowhere in haystack, NULL is returned; otherwise a pointer to the first
	 character of the first occurrence of needle is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char *text = "hola mundo";
	const char *search = "mun";
	char *result = ft_strnstr(text, search, 10);

	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");

	return (0);
}
*/