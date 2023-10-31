#include "main.h"
#define BUFFER_SIZE 1024
/**
 * close_w - the close function.
 * @fdr: my read.
 * @fdw: my  write
 */
void close_w(int fdr, int fdw)
{
	if (close(fdw) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100); }
	if (close(fdr) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		exit(100); }
}
/**
* main - Copy the content of one file to another file.
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
* Return: 0 on success, or an error code on failure.
*/
int main(int argc, char *argv[])
{
char buffer[BUFFER_SIZE];
char *file_p, *file_a;
int fdr, fdw;
ssize_t rd = 1024, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	file_p = argv[1];
	file_a = argv[2];
	fdr = open(file_p, O_RDONLY);
	if (fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_p);
		exit(98); }
	fdw = open(file_a, O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_a);
		exit(99); }
	while (rd == BUFFER_SIZE)
	{
		rd = read(fdr, buffer, BUFFER_SIZE);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_p);
			exit(98); }
		wr = write(fdw, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_a);
			exit(99); }}
	close_w(fdr, fdw);
	return (0);
}
