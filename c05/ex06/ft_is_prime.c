/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:45:49 by gscuderi          #+#    #+#             */
/*   Updated: 2023/11/12 12:12:26 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	modul;
	int	n;
    
    n = nb - 1;
    
	if (nb < 2)
		return (0);
	while (n > 1)
	{
		modul = nb % n;
		if (modul == 0)
			return (0);
		n--;
	}
	return (1);
}

int main()
{
	int i;
	
	printf("%d", ft_is_prime(7));
}
