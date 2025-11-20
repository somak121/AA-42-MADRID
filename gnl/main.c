
#include "get_next_line.h"

int main(void)
{
	int		fd;
	char	*line;
	int		count;

	fd = open("test.text", O_RDONLY);
	if (fd == -1)
	{
		printf("Error al abrir el archivo\n");
		return (1);
	}
	count = 1;
	printf("--- Leyendo el archivo ---\n");
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Línea %d: %s", count, line);
		free(line);
		count++;
	}
	printf("--- Fin del archivo ---\n");

	close(fd);
	return (0);
}