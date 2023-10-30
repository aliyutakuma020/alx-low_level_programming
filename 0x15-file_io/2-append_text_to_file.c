#include "main.h"
/**
 * append_text_to_file - Append text at the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The text content to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, byte_written, i;

	if (filename == NULL)
	{
		return (-1);
	}
	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
		{
			i++;
		}
		byte_written = write(file_desc, text_content, i);
		if (byte_written == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
