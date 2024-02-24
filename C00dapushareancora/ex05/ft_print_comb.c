/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:09:37 by gscuderi          #+#    #+#             */
/*   Updated: 2023/10/30 13:36:52 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	putchar_comma_space(int c)
{
	if (c != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	f;
	int	s;
	int	t;

	f = '0';
	while (f <= '7')
	{
		s = f + 1;
		while (s <= '8')
		{
			t = s + 1;
			while (t <= '9')
			{
				ft_putchar(f);
				ft_putchar(s);
				ft_putchar(t);
				putchar_comma_space(f);
				t++;
			}
			s++;
		}
		f++;
	}
}
