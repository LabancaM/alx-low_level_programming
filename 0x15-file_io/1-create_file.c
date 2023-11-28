#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - create file with right
 *
 * @filename: name of file
 * @text_content: number of caracters
 * Return: 1 is succeded otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, writeinfile, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		file = open(filename, O_CREAT, 0600);
		if (file == -1)
			return (-1);
		return (1);
	}
	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file  == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	writeinfile = write(file, text_content, i);
	if (writeinfile == -1)
		return (-1);
	close(file);
	return (1);
}
