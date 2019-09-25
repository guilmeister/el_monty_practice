#include "monty.h"

char *file_reader(const char *filename)
{
	int buffer;
	char *array;

	if (filename == NULL)
		return (0);

	buffer = open(filename, O_RDONLY);
	if (buffer == -1)
		return (0);

	array = malloc(sizeof(char) * SIZE);
	read(buffer, array, SIZE);
	close(buffer);
	return (array);
}
