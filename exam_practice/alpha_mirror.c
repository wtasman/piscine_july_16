#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;
	
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str);
		i++;
	}
}

void	alpha_mirror(char *str)
{
	int	i;
	char c;
	
	i = 0;
	c = str[i];
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i] < 110)
				ft_putchar(109 - (str[i] - 110));
			else
				ft_putchar(109 - (str[i] - 110));
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			if (str[i] < 78)
				ft_putchar(109 - (str[i] - 110));
			else
				ft_putchar(109 - (str[i] - 110));
		}
		i++;
		else
			ft_putchar(str[i]);
	}
}

int	main(int argc, char **argv)
{
	char	*str;
	
	str = argv[1];
	if (argc == 1 || argc > 2)
		ft_putchar('\n');
	else
		ft_putstr(alpha_mirror(str));
	return (0);
}
