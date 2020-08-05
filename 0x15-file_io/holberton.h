#ifndef FILE_IO_H
#define FILE_IO_H

#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/* reads and prints a text file*/
ssize_t read_textfile(const char *filename, size_t letters);

/* creates a file with read and write permissions*/
int create_file(const char *filename, char *text_content);

/* append text at thge end of file content*/
int append_text_to_file(const char *filename, char *text_content);

#endif
