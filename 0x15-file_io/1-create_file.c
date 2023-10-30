#include "main.h"
/**
 * create_file - Create a file with specified permissions, truncate if exists,
 *               and write text content to it.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, i;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	if (file_desc == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++);
		bytes_written = write(file_desc, text_content, text_content[i]);
		if (bytes_written == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);

}
