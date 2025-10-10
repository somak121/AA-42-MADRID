/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:16:49 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/10 18:01:56 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// toupper -  lower case to upper case letter conversion

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(void)
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('9'));
	printf("%c\n", ft_toupper('n'));
}
