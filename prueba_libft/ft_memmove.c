/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:09:56 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/12 17:48:10 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* memmove - copy byte string
The memmove() function copies len bytes from string src to string
	 dst.  The two strings may overlap; the copy is always done in a
	 non-destructive manner.
The memmove() function returns the original value of dst.


you can do overlapping
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	if ((!src && !dst) || len == 0)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s && d < s + len)
	{
		i = len;
		while (i--)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
