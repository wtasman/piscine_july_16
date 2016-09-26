#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	ft_lower(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + 32);
	else 
		return (c);
}

char	ft_cap(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (c - 32);
	else 
		return (c);
}

int		is_alph(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else 
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int isword;

	i = 0;
	isword = 0;
	while (str[i] != '\0')
	{
		if (is_alph(str[i]) && (isword != 1))
		{
			str[i] = ft_cap(str[i]);
			isword = 1;
		}
		else if (!is_alph(str[i]) && (isword == 1))
		{
			isword = 0;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	int	i;
	i = 0;
	char str[] = "THERE are SoMe CAPS herE";
	while (str[i] != '\0')
	{
		str[i] = ft_lower(str[i]);
		i++;
	}
	ft_strcapitalize(str);
	ft_putstr(str);
	return (0);
}