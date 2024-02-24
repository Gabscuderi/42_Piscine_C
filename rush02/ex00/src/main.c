/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atedesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:22:36 by atedesch          #+#    #+#             */
/*   Updated: 2023/11/11 16:25:27 by atedesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	char			*input = argv[1];
	char			*grid = (char *)malloc(sizeof(char) * 36);
	int	i;
	unsigned int	j;
	int				len = argc; //da valutare

	i = 0;
	j = 0;

	len = ft_strlen(input);

	ft_create_matrix(grid, input);

	while (i < len)
	{
		ft_putchar(grid[i]);
		ft_putchar('\n');
		i++;
	}

	free(grid);
	return (0);
}


