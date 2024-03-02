/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:36:47 by gscuderi          #+#    #+#             */
/*   Updated: 2023/11/14 17:41:20 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	difference;
	int	*ptr;

	i = 0;
	difference = max - min;
	ptr = (int *) malloc(difference * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
