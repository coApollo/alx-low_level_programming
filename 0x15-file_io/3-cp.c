#include "main.h"

/**
 *main - Entry point
 *
 *@argc: number of arguments in argv
 *@argv: An array of strings
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int f_read, f_write;
	char *mem;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	mem = _alloc_(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	f_read = read(file_from, mem, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from < 0 || f_read < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(mem);
			exit(98);
		}
		f_write = write(file_to, mem, f_read);
		if (file_to < 0 || f_write < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(mem);
			exit(99);
		}

		f_read = read(file_from, mem, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (f_read != 0);

	free(mem);
	_close_(file_from);
	_close_(file_to);
	return (0);
}


/**
 *_alloc_ - allocates memory to a buffer and
 *prints error if it fails
 *
 *@file: pointer to the file
 *Return: A pointer to the newly-allocated memory location
 */
char *_alloc_(char *fd)
{
	char *buffer;
	size_t size = 1024;

	buffer = (char *)malloc(sizeof(char) * size);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fd);
		exit(99);
	}

	return (buffer);
}


/**
 *_close_file - Close file || prrints error if
 *	it doesn't close
 *
 *@fd: The file to be closed.
 *Return: Nothing
 */
void _close_(int fd)
{
	int clos;

	clos = close(fd);

	if (clos < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", fd);
		exit(100);
	}
}
