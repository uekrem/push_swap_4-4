#include "push_swap.h"

void    ft_sa(t_num *num)
{
    int temp;

    if (num->counta > 1)
    {
        temp = num->num_lista[0];
        num->num_lista[0] = num->num_lista[1];
        num->num_lista[1] = temp;
        printf("sa\n");
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
        printf("sb\n");
    }
}

void    ft_ss(t_num *num)
{
    ft_sa(num);
    ft_sb(num);
    printf("ss\n");
}