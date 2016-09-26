#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char	ft_printline(int spaces, int stars)
{
	while (spaces > 0)
	{
		ft_putchar(' ');
		spaces--;
	}
	if (spaces == 0)
	{
		ft_putchar('/');
	}

	while (stars > 0)
	{
		ft_putchar('*');
		stars--;
	}
	if (stars == 0)
	{
		ft_putchar('\\');
	}
	ft_putchar(10);
	return(0);
}

int		main()
{
	printf("%d", ft_printline(3,1));
	return(0);
}
