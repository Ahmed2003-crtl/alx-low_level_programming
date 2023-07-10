#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include"main.h"
/**
 * create_file - creat a file and put a string inside it
 * @filename: the name of the file
 * @text_content: the content of which will be written in the file
 * Return: 0 (sucess)
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (access(filename, F_OK) == -1)
		chmod(filename, 0600);
	fp = fopen(filename, "w");
	if (fp == NULL || filename == NULL || text_content == NULL)
		return (-1);
	if (access(filename, F_OK) == 0)
		ftruncate(fileno(fp), 0);
	fprintf(fp, "%s", text_content);
	fclose(fp);
	return (1);
}
