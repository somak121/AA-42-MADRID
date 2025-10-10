/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:29:45 by smikhail          #+#    #+#             */
/*   Updated: 2025/10/10 15:48:50 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  atoi - convert ASCII string to integer

int	ft_atoi(const char	*str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\b' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/*
int	main(void)
{
    printf("%d\n", ft_atoi("   -123"));
    printf("%d\n", ft_atoi("42"));
    printf("%d\n", ft_atoi("+99"));
    printf("%d\n", ft_atoi("--123"));
    printf("%d\n", ft_atoi("  12abc34")); 
    return (0);
}
*/
