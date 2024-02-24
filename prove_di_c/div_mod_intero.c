/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:34:16 by gscuderi          #+#    #+#             */
/*   Updated: 2023/10/31 20:39:21 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void pc(char c)
{
	write(1, &c, 1);
}

void ft_div_mod(int a, int b, int *div, int* mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int x;
	int y;

	ft_div_mod(9, 4, &x, &y);
	pc(x + 48);
	pc(y + 48);
}

