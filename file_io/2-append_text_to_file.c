#include "main.h"
#include <stdio.h>

/**
  * append_text_to_file - append to a file
  * @filename: the name of the file
  * @text_content: NULL terminated string to write to file
  * Return: 1 on succes, -1 on failue
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, l;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (l = 0; text_content[l]; l++)
			;
		write(file, text_content, l);
	}
	close(file);

	return (1);
}
