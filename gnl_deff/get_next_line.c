/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:38:39 by smikhail          #+#    #+#             */
/*   Updated: 2025/11/20 14:33:48 by smikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*part;
	char		*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	part = part_buffer_add(fd, part, buffer);
	if (!part)
	{
		free(buffer);
		return (NULL);
	}
	free(buffer);
	line = check_new_line(&part);
	return (line);
}

/* comprobamos que estamos leyendo algo, 
si es 0 hacemos un break porque significa que hemos llegado al final del archivo
si es -1 hacemos free del part y returneamos null porque ha ocurrido un error
si leemos algun byte, estamos leyendo caracteres -> strjoin
para unir lo que leemos para el part

ademas cuando estamos declarando el bytes_read, es lo siguiente:
leemos el fichero que queremos, y en el buffer vamos a almacenar 
los caracteres que estamos leyendo
con buffer_size (el tamañp de bytes que vamos a leer) 
*/
char	*part_buffer_add(int fd, char *part, char *buffer)
{
	int	bytes_read;

	if (!part)
		part = gnl_strdup("");
	bytes_read = 1;
	while (gnl_find_newline(part) == -1 && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			free(part);
			return (NULL);
		}
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		part = gnl_strjoin(part, buffer);
		if (!part)
			return (NULL);
	}
	return (part);
}

char	*check_new_line(char **part)
{
	int		pos;
	int		len_part;
	char	*part_dup;
	char	*line;

	if (!part || !*part || (*part)[0] == '\0')
	{
		free(*part);
		*part = NULL;
		return (NULL);
	}
	pos = gnl_find_newline(*part);
	if (pos >= 0)
	{
		line = gnl_substr(*part, 0, pos + 1);
		len_part = gnl_strlen(*part);
		part_dup = gnl_substr(*part, pos + 1, len_part - pos - 1);
		free(*part);
		*part = part_dup;
		return (line);
	}
	line = gnl_strdup(*part);
	free(*part);
	*part = NULL;
	return (line);
}
