#include "main.h"

/**
 * main - copies the content of a file to another file
 *
 * @argc: The number of arguments in argv
 * @argv: An array of pointer to strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int fread, fwrite;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = _buffer(argv[2]);
	source = open(argv[1], O_RDONLY);
	fread = read(file_from, buf, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from < 0 || fread < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		fwrite = write(file_to, buf, fread);
		if (file_to < 0 || fwrite < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		fread = read(file_from, buf, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (fread > 0);

	free(buf);
	_close_file(file_from);
	_close_file(file_to);
	return (0);
}


/**
 *_buffer - allocates memory to a buffer
 *
 *@file: name of the file
 *Return: A pointer to the newly-allocated memory location
 */
char *_buffer(char *file)
{
	char *buffer;

	buffer = (char *)malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}


/**
 *_close_file - Closes file
 *
 *@file: The file to be closed.
 *Return: Nothing
 */
void _close_file(int file)
{
	int clos;

	clos = close(file);

	if (clos < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file);
		exit(100);
	}
}
