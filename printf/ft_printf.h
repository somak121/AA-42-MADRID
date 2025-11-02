/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:26:56 by smikhail          #+#    #+#             */
/*   Updated: 2025/11/02 16:23:39 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

//Main functions
int		ft_printf(const char *format, ...);

// Format functions
int		ft_printf_char(char c); // %c
int		ft_print_str(char *s); // %s
int		ft_print_int(int n); // %d & %i
int		ft_printf_int_unsigned(unsigned int n); // %u
int		ft_print_hex(unsigned long n, int uppercase); // %x & %X
int		ft_print_ptr(void *ptr); // %p

// Helper functions
void	ft_putnbr_print(long n);
void	ft_putnbr_print_unsigned(unsigned int n);

#endif
