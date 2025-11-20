
#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*parts[1024];
	char		*buffer;
	char		*line;

	if (fd < 0 || fd > 1023 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	parts[fd] = part_buffer_add(fd, parts[fd], buffer);
	if (!parts[fd] || parts[fd][0] == '\0')
		return (NULL);
	line = check_new_line(&parts[fd]);
	return (line);
}

char	*part_buffer_add(int fd, char *part, char *buffer)
{
	int	bytes_read;

	bytes_read = 1;
	while (gnl_find_newline(part) == -1 && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(buffer), free(part), NULL);
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		part = gnl_strjoin(part, buffer);
		if (!part)
			return (free(buffer), NULL);
	}
	free(buffer);
	return (part);
}

char	*check_new_line(char **part)
{
	int		pos;
	int		len_part;
	char	*rest;
	char	*line;

	if (!part || !*part)
		return (NULL);
	pos = gnl_find_newline(*part);
	if (pos >= 0)
	{
		line = gnl_substr(*part, 0, pos + 1);
		len_part = gnl_strlen(*part);
		rest = gnl_substr(*part, pos + 1, len_part - pos - 1);
		free(*part);
		*part = rest;
		return (line);
	}
	line = gnl_strdup(*part);
	free(*part);
	*part = NULL;
	return (line);
}