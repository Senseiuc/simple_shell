#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - a simple shell
 *
 * Return: Always 0.
 */

int main(void)
{
	size_t n;
	char *argv[] = {NULL,NULL};
	pid_t child_pid;
    int status, i;

	while (1)
    {
		wait(&status);
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			printf("#cisfun$");
			getline(&argv[0], &n, stdin);
			argv[0][strlen(argv[0]) - 1] = '\0';
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
		}
    }
    return (0);
}
