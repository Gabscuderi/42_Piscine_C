/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:18:25 by gscuderi          #+#    #+#             */
/*   Updated: 2023/11/08 10:37:10 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			n = 0;
			while (str[i + n] == to_find[n] || to_find[n] == '\0')
			{
				if (to_find[n] == '\0')
					return (&str[i]);
				n++;
			}
		}
		i++;
	}
	return (0);
}
