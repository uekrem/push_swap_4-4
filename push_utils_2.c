#include "push_swap.h"

int	ft_check_bitwise(t_num *num, int bitwise)
{
	int	i;
	int temp;

	temp = 0;
	i = -1;
	while (++i < num->counta)
		if ((ft_find_bubble(num, num->num_lista[i]) >> bitwise & 1) == 1)
			temp = i;
	return (temp);
}