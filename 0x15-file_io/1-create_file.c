#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>

/**
 * create_file - Create a file with the given filename and content
 * @filename: The name of the file to create
 * @text_content: The content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ret, len;
	mode_t mode;
	struct stat st;

	if (filename == NULL)
		return (-1);

	ret = stat(filename, &st);
	if (ret == 0)
		mode = st.st_mode;
	else
		mode = S_IRUSR | S_IWUSR;


	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		ret = write(fd, text_content, len);
		if (ret == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
