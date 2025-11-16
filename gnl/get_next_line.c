# include <get_next_line.h>

char *get_next_line(int fd)
{
	static char	*part;
	char		*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1)*sizeof(char *));
	if (!buffer)
		return (NULL);
	
		
	return (line);
}