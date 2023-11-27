#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read and print text file
 *
 * @filename: name of file
 * @letters: number of caracters
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t writefile, file;

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL || filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	writefile = write(STDOUT_FILENO, buffer, read(file, buffer, letters));
	if (writefile == -1)
		return (0);
	close(file);
	free(buffer);
	return (writefile);
}
