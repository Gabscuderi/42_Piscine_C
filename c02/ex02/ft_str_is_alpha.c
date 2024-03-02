/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:36:16 by gscuderi          #+#    #+#             */
/*   Updated: 2023/11/02 20:15:23 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_control_str(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
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
