


#include "libft.h"

// putnbr - sends a number n to the specified file descriptor 

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;

	if (fd < 0)
		return;
	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	c = nb % 10 + '0';
	write(fd, &c, 1);
}
