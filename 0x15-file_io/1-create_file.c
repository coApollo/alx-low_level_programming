#include "main.h"
/**
 *create_file - creates a file
 *
 *@filename: name of the file to be created
 *@text_content: string to write on the file
 *Return: 1 one success
 *	: -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t filewrite;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);

	filewrite = write(fp, text_content, _strlen(text_content));
	if (filewrite < 0)
		return (-1);

	if (close(fp) == -1)
		return (-1);

	return (1);
}
/**
 *_strlen - Count the total number of characters
 *		in a string.
 *
 *@str: The given string
 *Return: The total number of characters found
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

