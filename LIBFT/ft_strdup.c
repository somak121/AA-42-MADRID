/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:18:15 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/10 18:37:10 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The  strdup() function returns a pointer to a new string which is a du‐
       plicate of the string s.  Memory for the new string  is  obtained  with
       malloc
*/

char	*ft_strdup(const char *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)malloc((n + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < n && s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
