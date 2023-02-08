#include "push_swap.h"

void    ft_ra(t_num *num)
{
    t_temp  index;
    int     temp;

    index.i = 0;
    temp = num->num_lista[0];
    while (++index.i < num->counta)
        num->num_lista[index.i - 1] = num->num_lista[index.i];
    num->num_lista[num->counta - 1] = temp;
    write(1, "ra\n", 3);
}

void    ft_rb(t_num *num)
{
    t_temp  index;
    int     temp;

    index.i = 0;
    temp = num->num_listb[0];
    while (++index.i < num->countb)
        num->num_listb[index.i - 1] = num->num_listb[index.i];
    num->num_listb[num->countb - 1] = temp;
    write(1, "rb\n", 3);
}

void    ft_rr(t_num *num)
{
    ft_ra(num);
    ft_rb(num);
    write(1, "rr\n", 3);
}