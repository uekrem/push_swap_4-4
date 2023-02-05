#include "push_swap.h"

int	ft_atoi(char *nptr)
{
	int	i;
	int	mark;
	int	value;

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
	return (value);
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