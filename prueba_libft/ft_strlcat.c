/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:12:50 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/12 18:19:08 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* strlcat - appends string src to the end of dst.  It will append at most
	 dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
	 dstsize is 0 or the original dst string was longer than dstsize

Return - For strlcat() that means the initial length of dst plus
	 the length of src.
*/

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ldest;
	size_t	lsrc;

	ldest = 0;
	while (ldest < dstsize && dest[ldest])
		ldest++;
	lsrc = 0;
	while (src[lsrc])
		lsrc++;
	i = 0;
	while (src[i] && (ldest + i + 1) < dstsize)
	{
		dest[ldest + i] = src[i];
		i++;
	}
	if ((ldest + i) < dstsize)
		dest[ldest + i] = '\0';
	return (lsrc + ldest);
}
