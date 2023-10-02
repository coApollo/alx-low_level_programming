#include "main.h"
/**
 *read_textfile -reads a text file and prints it to the POSIX standard output
 *
 *@filename: name of file to be read
 *@letters: numb of letters it shoukd print
 *Return: no of bytes read or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	char *buf;
	ssize_t fileread;
	ssize_t filewrite;

	buf = (char *)malloc(letters * sizeof(char));
	if (buf == NULL || filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	fileread = read(fp, buf, letters);
	if (fileread < 0)
	{
		close(fp);
		free(buf);
		return (0);
	}
	filewrite = write(STDOUT_FILENO, buf, fileread);

	free(buf);
	close(fp);

	return (filewrite);
}

