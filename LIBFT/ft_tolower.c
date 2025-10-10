/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:15:49 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/10 18:05:46 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// tolower -  upper case to lower case letter conversion

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	main(void)
{
	printf("%c\n", ft_tolower('Z'));
	printf("%c\n", ft_tolower('9'));
	printf("%c\n", ft_tolower('n'));
}
