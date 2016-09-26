#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	aff_a(char	*str)
{
	int		i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != 'a')
			i++;
		else if (str[i] == 'a')
		{
			return (str[i]);
		}
	}
	return ('\n');
}

int		main(int argc, char **argv)
{
	if ((argc == 1) || (argc > 2))
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	else
		ft_putchar(aff_a(argv[1]));
	return (0);
}
