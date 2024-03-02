/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:22:17 by gscuderi          #+#    #+#             */
/*   Updated: 2023/11/16 14:41:05 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	difference;
	int	*ptr;

	i = 0;
	difference = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	ptr = (int *) malloc(difference * sizeof(int));
	if (ptr == NULL)
		return (-1);
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	*range = ptr;
	return (difference);
}
