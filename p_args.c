#include <stdio.h>
/**
 *main - takes arguements and print it
 *@av: the arguements
 *@ac: the number of arguments
 *
 *Return: Void
 */

int main(int ac, char **av)
{
	int i = 0;

	while(av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	return 0;
}
