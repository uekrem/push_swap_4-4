#include "push_swap.h"

void    ft_two(t_num *num)
{
    if (num->num_lista[0] > num->num_lista[1])
        ft_sa(num);
}

void    ft_three(t_num *num)
{
    int small;

    small = ft_num_small(num);
    if (small == 0 && num->num_lista[1] > num->num_lista[2])
    {
        ft_sa(num);
        ft_ra(num);
    }
    else if (small == 1)
    {
        if (num->num_lista[0] > num->num_lista[2])
            ft_ra(num);
        else
            ft_sa(num);
    }
    else if (small == 2)
    {
        if (num->num_lista[0] > num->num_lista[1])
            ft_sa(num);
        ft_rra(num);
    }
}

void    ft_four(t_num *num)
{
    int small;

    small = ft_num_small(num);
    if (small == 1)
        ft_sa(num);
    else if (small == 2)
    {
        ft_ra(num);
        ft_ra(num);
    }
    else if (small == 3)
        ft_rra(num);
    ft_pb(num);
    ft_three(num);
    ft_pa(num);
}

void    ft_part(t_num *num)
{
    if (num->counta == 2)
        ft_two(num);
    else if (num->counta == 3)
        ft_three(num);
    else if (num->counta == 4)
        ft_four(num);
    /*else if (num->counta == 5)
        ft_five(num);
    else if (num->counta > 5)
        ft_ult_radix(num);*/
}