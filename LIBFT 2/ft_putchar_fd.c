

#include "libft.h"

// putchar_fd - sends the char c to the specified file descriptor

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return;
	write (fd, &c, 1);
}
