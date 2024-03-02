/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:17:49 by gscuderi          #+#    #+#             */
/*   Updated: 2023/11/02 17:16:16 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_control_str(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	control;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		control = ft_control_str(str[i]);
		if (control == 1)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
