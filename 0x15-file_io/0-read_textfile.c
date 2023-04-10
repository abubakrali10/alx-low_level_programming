#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of file to read
 * @letters: number of letters to read
 * Return: size read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t byte_read, byte_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	byte_read = fread(buffer, sizeof(char), letters, fp);

	if (byte_read == -1)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	byte_written = write(1, buffer, byte_read);

	if (byte_written == -1 || byte_written != byte_read)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	fclose(fp);
	free(buffer);
	return (byte_written);
}
