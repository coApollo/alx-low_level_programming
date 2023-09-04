#include "main.h"
/**
 *append_text_to_file -appends content to a file
 *
 *@filename: name of file append to
 *@text_content: text to append
 *Return: 1 if successful othewise -
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t filewrite;

	if (filename == NULL)
		return (-1);

	fp = open("filename", O_WRONLY | O_APPEND);
	if (fp < 0)
		return (-1);

	filewrite = write(fp, text_content, _strlen(text_content));
	if (filewrite == -1)
		return (-1);

	return (1);
}
/**
 *_strlen - Count the total number of characters
 *              in a string.
 *
 *@str: The given string
 *Return: The total number of characters found
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
