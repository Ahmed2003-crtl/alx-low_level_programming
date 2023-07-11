#include"main.h"
/**
 * append_text_to_file - append text to the file
 * @filename: is a pointer
 * @text_content: is a pointer
 * Return: 0 (success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) == 0)
	{
		if (text_content == NULL)
			return (1);
		fp = fopen(filename, "a");
		fprintf(fp, "%s", text_content);
		if (fp == NULL)
			return (-1);
		fclose(fp);
		return (1);
	}
	return (-1);
}
