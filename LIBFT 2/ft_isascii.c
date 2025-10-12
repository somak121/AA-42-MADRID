/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:08:02 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/10 15:52:24 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// isascii - checks if a character is in the range of ASCII

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isascii('H'));
	printf("%d\n", ft_isascii('-'));
	printf("%d\n", ft_isascii('9'));
	printf("%d\n", ft_isascii(200));
	return (0);
}
