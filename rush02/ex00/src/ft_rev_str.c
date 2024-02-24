/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atedesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:59:11 by atedesch          #+#    #+#             */
/*   Updated: 2023/11/11 16:25:33 by atedesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void ft_rev_str(char *str) {
  int len = ft_strlen(str);
  int i = 0;
  int j = len - 1;

  while (i < j) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
}

