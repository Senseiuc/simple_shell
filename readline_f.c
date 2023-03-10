#include <stdio.h>
#include <stdlib.h>
/**
 *main - readline and print the text
 *
 *Return: int
 */

int main(void)
{
	size_t n;
	char *buf = NULL;

	printf("$");
	getline(&buf, &n, stdin);
	printf("%s", buf);
	free(buf);
	return (0);
}
