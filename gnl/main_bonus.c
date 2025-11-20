#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	int		fd1, fd2, fd3, fd4;
	char	*line1, *line2, *line3, *line4;

	// OJO: He corregido los nombres de los archivos para que coincidan
	// con los del printf de error.
	fd1 = open("test.text", O_RDONLY);
	fd2 = open("test1.text", O_RDONLY);
	fd3 = open("test2.text", O_RDONLY);
	fd4 = open("empty.text", O_RDONLY);


	if (fd1 < 0 || fd2 < 0 || fd3 < 0 || fd4 < 0)
	{
		printf("Error: No se pudo abrir uno de los archivos (test.text, test1.text, o test2.text)\n");
		return (1);
	}

	printf("--- Iniciando lectura completa y alterna de 3 archivos ---\n\n");

	while (1)
	{
		line1 = get_next_line_bonus(fd1);
		line2 = get_next_line_bonus(fd2);
		line3 = get_next_line_bonus(fd3);
		line4 = get_next_line_bonus(fd4);

		if (line1 == NULL && line2 == NULL && line3 == NULL && line4 == NULL)
			break ;
		if (line1)
		{
			printf("[Desde test.txt]: %s", line1);
			free(line1);
		}
		if (line2)
		{
			printf("[Desde test1.txt]: %s", line2);
			free(line2);
		}

		if (line3)
		{
			printf("[Desde test2.txt]: %s", line3);
			free(line3);
		}
		if (line4)
		{
			printf("[Desde test3.txt]: %s", line4);
			free(line4);
		}
	}

	printf("\n--- Todos los archivos han sido leídos por completo ---\n");

	close(fd1);
	close(fd2);
	close(fd3);
	close(fd4);
	return (0);
}