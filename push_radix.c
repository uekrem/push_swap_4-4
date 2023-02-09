#include "push_swap.h"

int    ft_maxbit(t_num *num)
{
    int high_value;
    int max_bit;

    max_bit = 0;
    high_value = num->counta - 1;
    while (high_value > 0)
    {
        max_bit++;
        high_value /= 2;
    }
    return (max_bit);
}

void    ft_bubble(t_num *num)
{
    t_temp temp;

    temp.i = -1;
    while (++temp.i < num->counta)
    {
        temp.j = temp.i;
        while (++temp.j < num->counta)
        {
            if (num->num_bubble[temp.i] > num->num_bubble[temp.j])
            {
                temp.k = num->num_bubble[temp.i];
                num->num_bubble[temp.i] = num->num_bubble[temp.j];
                num->num_bubble[temp.j] = temp.k;
            }
        }
    }
}

int     ft_find_bubble(t_num *num, int find_value)
{
    t_temp  temp;

    temp.i = -1;
    while (++temp.i < num->dont_len)
        if (num->num_bubble[temp.i] == find_value)
            return (temp.i);
    return (0);
}

void    ft_radix(t_num *num)
{
    t_temp  temp;
    int     fix_len;
    int     max_bit;

    temp.i = -1;
    max_bit = ft_maxbit(num);
    ft_bubble(num);

    num->dont_len = num->counta;
    int b_len;

    while (++temp.i < max_bit)
    {
        temp.j = -1;
        temp.k = -1;
        fix_len = ft_check_bitwise(num, temp.i) + 1; 
        while (++temp.j < fix_len)
        {
            if (ft_find_bubble(num, num->num_lista[0]) >> temp.i & 1)
                ft_ra(num);
            else 
                ft_pb(num);
        }
        b_len = num->countb;
        if (temp.i < max_bit - 1)
        {
            while (++temp.k < b_len)
            {
                if ((ft_find_bubble(num, num->num_listb[0]) >> (temp.i + 1) & 1) == 0)
                    ft_rb(num);
                else
                    ft_pa(num);
            }
        }
        else
            while (num->countb)
                ft_pa(num);
    }
}