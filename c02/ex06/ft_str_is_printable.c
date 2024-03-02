/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:25:39 by gscuderi          #+#    #+#             */
/*   Updated: 2023/11/02 17:26:06 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_control_str(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
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
