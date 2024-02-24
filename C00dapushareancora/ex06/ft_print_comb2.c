/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:39:58 by gscuderi          #+#    #+#             */
/*   Updated: 2023/10/30 16:22:13 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	split_int(int x)
{
	int	fparcel;
	int	sparcel;

	if (x < 10)
	{
		ft_putchar('0');
		ft_putchar(x + '0');
	}
	else
	{
		fparcel = x / 10;
		sparcel = x % 10;
		ft_putchar(fparcel + '0');
		ft_putchar(sparcel + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			split_int(i);
			ft_putchar(' ');
			split_int(j);
			if (i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
