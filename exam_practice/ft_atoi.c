/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 22:32:39 by mgrimes           #+#    #+#             */
/*   Updated: 2016/07/15 22:32:42 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	x)
{
	if (x / 10)
		ft_putnbr(x / 10);
	ft_putchar(x % 10 + '0');
}

int		ft_atoi(char *str)
{
	int answer;
	int sign;
	int i;

	answer = 0;
	i = 0;
	sign = 1;
	if ()
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[0] == '+')
	{
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			break ;
		answer *= 10;
		answer += str[i] - '0';
		i++;
	}
	return (answer * sign);
}

int		main()
{
	char str[] = "54322";
	ft_putnbr(ft_atoi(str));
	ft_putnbr(atoi(str));
	return(0);
}
