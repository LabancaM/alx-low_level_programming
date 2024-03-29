#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - read and print text file
 *
 * @filename: name of file
 * @text_content: text to add
 * Return: 1 if succeded otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, appendtofile, i = 0;
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	appendtofile = write(file, text_content, i);
	if (appendtofile == -1)
		return (-1);
	close(file);
	return (1);
}
