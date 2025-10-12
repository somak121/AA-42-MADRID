/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:13:48 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/10 17:34:18 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  strlen - number of the length of the string

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int	main(void)
{
	printf("%d\n", ft_strlen("hola"));
	printf("%d\n", ft_strlen("hola hola"));
	printf("%d\n", ft_strlen(""));
	return (0);
}
