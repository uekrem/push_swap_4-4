#include "push_swap.h"

void    ft_sa(t_num *num)
{
    int temp;

    if (num->counta > 1)
    {
        temp = num->num_lista[0];
        num->num_lista[0] = num->num_lista[1];
        num->num_lista[1] = temp;
        write(1, "sa\n", 3);
    }
}

void    ft_sb(t_num *num)
{
    int temp;

    if (num->countb > 1)
    {
        temp = num->num_listb[0];
        num->num_listb[0] = num->num_listb[1];
        num->num_listb[1] = temp;
        write(1, "sb\n", 3);
    }
}

void    ft_ss(t_num *num)
{
    ft_sa(num);
    ft_sb(num);
    write(1, "ss\n", 3);
}