#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c ,1);
	return(0);
}
void	ft_pascals_triangle(int n)
{
	int	row;
	int	c;
	int temp;
	
	temp = n;
	row = 1;
	while(row <= n)
	{
		c = 1;
		while(c < temp)
		{
		ft_putchar(' ');
		c++;
		}
		temp--;
		c = 1;
		while(c <= (2 * (row-1)))
		{
			ft_putchar('*');
			c++;
		}
		ft_putchar(10);
		row++;
	}
	
}

int		main()
{
	ft_pascals_triangle(5);
	return (0);
}
