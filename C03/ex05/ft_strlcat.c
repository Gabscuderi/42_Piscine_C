/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:21:21 by gscuderi          #+#    #+#             */
/*   Updated: 2023/11/16 16:38:48 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srcl;

	i = 0;
	srcl = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[srcl] != '\0')
	{
		dest[i] = src[srcl];
		srcl++;
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (i);
}
