#include <stdlib.h>
#include <stdio.h>

int		pgcd(int a, int b)
{
	if (b == 0)
		return (a);
	return pgcd(b, a % b);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	printf("%c", '\n');
	return (0);
}