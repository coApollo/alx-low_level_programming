#include "main.h"
/**
 *append_text_to_file -appends content to a file
 *
 *@filename:The file to append to
 *@text_content: text/content to append
 *Return: 1 if successful
 *	: othewise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t filewrite;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
		return (-1);

	filewrite = write(f, text_content, _strlen(text_content));
	if (filewrite < 0 || f < 0)
		return (-1);

	close(f);

	return (1);
}
/**
 *_strlen - finds the string length
 *
 *@str: string
 *Return: The total number of characters found
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
