

#include "printf.h"

int	ft_print_int(int n)
{
	unsigned int	i;
	long			nb;

	nb = n;
	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		nb = -n;
		i++;
	}
	while (nb > 9)
	{
		nb = nb/10;
		i++;
	}
	i++;
	ft_putnbr_print(n);
	return (i);
}

int	ft_printf_int_unsigned(unsigned int n)
{
	unsigned int	i;
	unsigned int	nb_uns;

	nb_uns = n;
	i = 0;
	while (nb_uns > 9)
	{
		nb_uns = nb_uns/10;
		i++;
	}
	i++;
	ft_putnbr_print_unsigned(n);
	return (i);
}

void	ft_putnbr_print(long n)
{
	long	nb;
	char	c;

	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr_print(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}
void	ft_putnbr_print_unsigned(unsigned int n)
{
	unsigned int	nb;
	char			c;

	nb = n;
	if (nb > 9)
		ft_putnbr_print_unsigned(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}
