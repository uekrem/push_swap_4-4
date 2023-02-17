/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hekrem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:10:07 by hekrem            #+#    #+#             */
/*   Updated: 2023/02/17 14:10:07 by hekrem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_int_check(long value)
{
	if (value > 2147483647 || value < -2147483648)
		return (0);
	return (1);
}

int	ft_atoi(char *nptr, t_num *num)
{
	int		i;
	int		mark;
	long	value;

	value = 0;
	mark = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			mark *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		value = (value * 10) + (nptr[i] - '0');
		i++;
	}
	value *= mark;
	if (ft_int_check(value))
		return (value);
	return (ft_error(num));
}

int	ft_num_small(t_num *num)
{
	int	i;
	int	index;

	index = 0;
	i = -1;
	while (++i < num->counta)
	{
		if (num->num_lista[index] > num->num_lista[i])
			index = i;
	}
	return (index);
}

int	ft_sort_check(t_num *num)
{
	int	i;
	int	flag;

	flag = 0;
	i = -1;
	while (++i < num->counta - 1)
		if (num->num_lista[i] < num->num_lista[i + 1])
			flag++;
	return (flag);
}

int	ft_repeat_num(t_num *num)
{
	t_temp	temp;

	temp.i = -1;
	while (++temp.i < num->counta - 1)
	{
		temp.j = temp.i;
		while (++temp.j < num->counta)
			if (num->num_lista[temp.i] == num->num_lista[temp.j])
				return (1);
	}
	return (0);
}
