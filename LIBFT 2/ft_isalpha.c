/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:07:00 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/10 15:57:06 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// isalpha - alphabetic character test

int	t_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isalpha('H'));
	printf("%d\n", ft_isalpha('-'));
	printf("%d\n", ft_isalpha('9'));
	return (0);
}
