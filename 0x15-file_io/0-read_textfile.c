#include "main.h"
/**
 *read_textfile -reads a text file and prints it to the POSIX standard output
 *
 *@filename: name of file to be read
 *@letters: no of letters it shoukd print
 *Return: no of bytes read || 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	char *buf;
	ssize_t fileread;
	ssize_t filewrite;

	buf = (char *)malloc(letters * sizeof(char));
	if (buf == NULL || filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	fileread = read(file, buf, letters);
	if (fileread < 0)
	{
		close(file);
		free(buf);
		return (0);
	}
	filewrite = write(STDOUT_FILENO, buf, fileread);

	free(buf);
	close(file);

	return (filewrite);
}

