#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int	x)
{
	if (x / 10)
		putnbr(x / 10);
	putchar(x % 10 + '0');
}

void	prnt_bits(unsigned char octet)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		putnbr(!!((octet << i) & 0x80));
		i++;
	}
}

int	main(void) 
{
  unsigned char a;

  a = 'l';
  prnt_bits(a);
  return (0);
}