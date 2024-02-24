/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atedesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:21:26 by atedesch          #+#    #+#             */
/*   Updated: 2023/11/11 16:17:13 by atedesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
//void	ft_swap(int *a, int *b);
//void	ft_putstr(char *str);
int		ft_strlen(char *str);
//int		ft_strcmp(char *s1, char *s2);
void	ft_rev_str(char *str);
char	*ft_create_matrix(char *grid, char *input);
int		ft_hundreds(char *str);

#endif