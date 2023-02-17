/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hekrem <hekrem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:09:59 by hekrem            #+#    #+#             */
/*   Updated: 2023/02/17 14:38:46 by hekrem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_bitwise(t_num *num, int bitwise)
{
	int	i;
	int	temp;

	temp = 0;
	i = -1;
	while (++i < num->counta)
		if ((ft_find_bubble(num, num->num_lista[i]) >> bitwise & 1) == 1)
			temp = i;
	return (temp);
}
