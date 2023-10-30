#include "main.h"
#include <sys/stat.h>
/**
 * read_textfile - Read and print a text file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int file_desc;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		return (0);
	}
	buf = malloc(letters);
	if (buf == NULL)
	{
		close(file_desc);
		return (0);
	}
	bytes_read = read(file_desc, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);
		close(file_desc);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written != bytes_read)
	{
		free(buf);
		close(file_desc);
		return (0);
	}
	free(buf);
	close(file_desc);
	return (bytes_read);
}
