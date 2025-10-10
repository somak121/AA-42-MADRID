/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:13:38 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/10 17:34:55 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strlcpy - copies up to dstsize - 1 characters from the string src to dst,
//	 NUL-terminating the result if dstsize is not 0.

// return the length of the string they tried to create  (length of src)

size_t	ft_strlcpy(char *dest, char *src, size_t dstsize)
{
	unsigned int	count;
	unsigned int	i;

	i = 0;
	count = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[count] != '\0')
		count++;
	return (count);
}

/*
int	main(void)
{
	char src[] = "hello friend";
	char dest[50];
	size_t len = ft_strlcpy(dest, src, 8);
	printf("Destino: %s\n", dest);
	printf("Longitud de src: %zu\n", len);
	return (0);
}
*/