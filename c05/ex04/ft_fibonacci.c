/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:29:01 by gscuderi          #+#    #+#             */
/*   Updated: 2023/11/09 21:50:32 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	tot;

	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	tot = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (tot);
}
