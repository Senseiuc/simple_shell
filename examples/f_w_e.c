#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t child_pid;
    int status, i;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (i = 0; i < 5; i++)
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
        	if (execve(argv[0], argv, NULL) == -1)
    		{
        		perror("Error:");
    		}
    	}
		sleep(3);
	}
    if (child_pid != 0 && i == 5)
    {
        wait(&status);
        printf("Oh, it's all better now\n");
    }
    return (0);
}
