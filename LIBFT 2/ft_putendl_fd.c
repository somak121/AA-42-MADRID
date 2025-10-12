

#include "libft.h"

// putendl_fd - sends the string s to the specified file descriptor continued by /n

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!s || fd < 0)
		return;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "/n", 1);
}