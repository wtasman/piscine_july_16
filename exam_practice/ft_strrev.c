#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char	*ft_strrev(char *str)
{
	int length;
	int	index;

	index = 0;
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	length--;
	while (index < length)
	{
		ft_swap(&str[index], &str[length]);
		index++;
		length--;
	}
	return(str);
}

int	main()
{
	char torrey[] = "I want to use RacecaR but that is dumb";
	ft_strrev(torrey);
	ft_putstr(torrey);
	return(0);
}
