/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:15:17 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/10 16:01:34 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strrchr - locate the last occurance of c and return the pointer
//		to the located character or NULL if the character
//		does not appear in the string

char	*ft_strrchr(const char *str, int c)
{
	const char	*final;

	final = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			final = str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *) final);
}

int	main(void)
{
	printf("%s\n", ft_strrchr("hola buen", 97));
	printf("%s\n", ft_strrchr("hola buenas", 97));
	printf("%s\n", ft_strrchr("hol buens", 97));
	return (0);
}
