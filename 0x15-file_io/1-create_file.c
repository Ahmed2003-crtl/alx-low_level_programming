#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include<string.h>
#include <sys/types.h>
#include <fcntl.h>
#include"main.h"
/**
 * create_file - creat a file and put a string inside it
 * @filename: the name of the file
 * @text_content: the content of which will be written in the file
 * Return: 0 (sucess)
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int w;

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_content, strlen(text_content));
	if (fp == -1 || filename == NULL || text_content == NULL || w == -1)
		return (-1);
	close(fp);
	return (1);
}
