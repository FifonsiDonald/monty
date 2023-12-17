#include "main.h"
#define _GNU_SOURCE
int main(int argc, char *argv[])
{
	int fd;
	/*size_t size;*/
	char *lineptr;
	char *opcode, *delimiter = "\n\t\r\a ;:";
	stack_t *head = NULL;
	unsigned int counter = 1;
	ssize_t read_file = 1;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	/* change to !fd later to verify if it still works */
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	read_file = read(fd, &lineptr, 1024);
	if (read_file == -1)
	{
		fprintf(stderr, "Error reading file %s\n", argv[1]);
		free(lineptr);
		close(fd);
		exit(EXIT_FAILURE);
	}
	lineptr = malloc(sizeof(char) * 1024);
	if (lineptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	opcode = strtok(lineptr, delimiter);
	while (read_file)
	{
		execute_commands(opcode, &head, counter);
		/*read_file = getline(&lineptr, 1024, fd);*/
		if (read_file > 0)
		{
			/*execute_commands(opcode, &head, counter);*/
			opcode = strtok(lineptr, delimiter);
		}
		/*free(lineptr);*/
		counter++;
	}
	/*freeStack();*/
	close(fd);
return (0);
}
