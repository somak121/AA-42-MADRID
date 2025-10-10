/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:09:40 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/10 17:37:24 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* memcpy - copy memory area
The memcpy() function copies n bytes from memory area src to memory
	 area dst.  If dst and src overlap, behavior is undefined.
	 Applications in which dst and src might overlap should use
	 memmove(3) instead.
The memcpy() function returns the original value of dst.
 */

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = n;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i > 0)
	{
		d[i] = s[i];
		i--;
	}
	return (dst);
}
