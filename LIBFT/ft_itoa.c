/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:02:55 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/11 18:33:07 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// itoa - string representing the integer number recived as an argument

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	size_t	i;

	i = 0;
	if (n == 0)
		str[0] = '0';
	len = ft_strlen((char *)n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	str[len] = '\0';
	return (str);
}
