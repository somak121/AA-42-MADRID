/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:26:10 by smikhail          #+#    #+#             */
/*   Updated: 2025/11/02 16:10:13 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long n, int uppercase)
{
	char	*hex;
	char	c;
	int		count;

	count = 0;
	if (uppercase)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_print_hex(n / 16, uppercase);
	}
	c = hex[n % 16];
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	addr;
	int				count;

	addr = (unsigned long)ptr;
	count = 0;
	if (addr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	count = 2;
	count += ft_print_hex(addr, 0);
	return (count);
}
