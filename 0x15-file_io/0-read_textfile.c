#include "main.h"
/**
 * read_textfile -  reads a text file and prints
 *it to the POSIX standard output.
 *@filename: pointer to string
 *@letters: letters of letters it should read and print
 *Return: number of letters it could read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t br, bw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	br = read(fd, buffer, letters);
	bw = write(STDOUT_FILENO, buffer, br);

	close(fd);
	free(buffer);

	return (bw);
}
