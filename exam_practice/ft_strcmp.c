/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 15:22:36 by wasman            #+#    #+#             */
/*   Updated: 2016/07/20 15:31:08 by wasman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1++ == *s2++)
	{
		if (*s1 == '\0' && *s2 == '\0')
		{
			return (0);
		}
	}
	return (1);
}

int 	main()
{
	char str1[] = "Torrey\\nTorrey";
	char str2[] = "Torrey\\tTorrey";
	int val;

	val = ft_strcmp(str1, str2);
	printf("%d", val);
}