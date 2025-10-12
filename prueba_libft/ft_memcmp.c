/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:08:44 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/10 17:39:39 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* memcmp - compare byte string
	 The memcmp() function compares byte string s1 against byte string
	 s2.  Both strings are assumed to be n bytes long.
The memcmp() function returns zero if the two strings are
	 identical, otherwise returns the difference between the first two
	 differing bytes
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*fir;
	const unsigned char	*sec;

	i = 0;
	fir = (const unsigned char *)s1;
	sec = (const unsigned char *)s2;
	while (i < n)
	{
		if (fir[i] != sec[i])
			return (fir[i] - sec[i]);
		i++;
	}
	return (0);
}
