#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	is_lower(char c)
{
	c = c - 97;
	c = ((c + 39) % 26);
	c = c + 97;
	return (c);
}

char	is_caps(char c)
{
	c = c - 65;
	c = ((c + 39) % 26);
	c = c + 65;
	return (c);
}

char	ft_rotate(char c)
{
	if (c >= 65 && c <= 90)
		return (is_caps(c));
	else if (c >= 97 && c <= 122)
		return (is_lower(c));
	else
		return (c);
}

char	*rot13(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		str[index] = ft_rotate(str[index]);
		index++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(rot13(argv[1]));
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
