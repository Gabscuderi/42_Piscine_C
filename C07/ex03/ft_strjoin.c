/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:27:38 by gscuderi          #+#    #+#             */
/*   Updated: 2023/11/15 19:37:35 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_alloc_strs(int *z, char *ptr, char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		ptr[*z] = str[j];
		j += 1;
		*z += 1;
	}
}

void	ft_alloc_sep(int *z, int *k, char *ptr, char *sep)
{
	ptr[*z] = sep[*k];
	*k += 1;
	*z += 1;
}

int	ft_ptr_to_alloc(char *ptr, int *z, int *i)
{
	*z = 0;
	*i = 0;
	if (ptr == NULL)
		return (0);
	return (1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		z;
	char	*ptr;

	ptr = (char *)malloc(sizeof(char));
	if (!(ft_ptr_to_alloc(ptr, &z, &i)))
		return (0);
	while (i < size)
	{
		ft_alloc_strs(&z, ptr, strs[i]);
		k = 0;
		if (i < size -1)
		{
			while (sep[k] != '\0')
				ft_alloc_sep(&z, &k, ptr, sep);
		}
		i++;
	}
	ptr[z] = '\0';
	return (ptr);
}
