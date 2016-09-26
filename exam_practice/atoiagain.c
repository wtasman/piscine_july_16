#include <unistd.h>
#include <stdio.h>

void	ft_puchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int	num)
{
	long number;

	number = num;
	if (number < 0)
	{
		number = -number;
		ft_puchar('-');
	}
	if (number / 10)
		ft_putnbr(number / 10);
	ft_puchar(number % 10 + '0');
}

int	ft_atoi(char *str)
{
	int		number;
	int		sign;
	int		i;

	i = 0;
	number = 0;
	sign = 0;
	while ((str[i] == '\n') || (str[i] == ' ') || (str[i] == '\t') ||
		(str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += (str[i] - '0');
		i++;
	}
	if (sign != 0)
		return (-number);
	return(number);
}

int	main()
{
	char str[] = "-2147483648";
	ft_putnbr(ft_atoi(str));
	return(0);
}

