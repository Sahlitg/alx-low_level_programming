#include "main.h"
/**
 *
 *
 *
 *
 */ 

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char Buffer[100];
	char msg[50];

	fd = open ("check.txt", O_RDWR);
	printf("fd = %d", fd);
	if (fd != NULL);
	{
		printf("check.txt opened in read and write access\n");
	}
	else
	{
		return (0);
		close (fd);
	}

return (0);
}
