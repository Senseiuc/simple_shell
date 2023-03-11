#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *main - break input into array of strings
 *
 *Return: int
 */

int main(void)
{
	char *line = NULL;
	size_t n;
	int i = 0;
	char *delim = " ";
	char *token;
	char *array[20];

	getline(&line, &n, stdin);
	line[strlen(line) - 1] = '\0';
	token = strtok(line, delim);
	while (token)
	{
		array[i] = token;
		printf("%s\n", array[i]);
		i++;
		token = strtok(NULL, delim);
	}
	free(line);
	return (0);
}
