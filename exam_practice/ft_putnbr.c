#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		num = -num;                                                                                        
		ft_putchar('-');
	}
	if (num / 10)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}

int		main(void)
{
	int i;

	i = -30458;
	ft_putnbr(i);
	return (0);
}
