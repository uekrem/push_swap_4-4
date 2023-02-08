#include "push_swap.h"

void    ft_rra(t_num *num)
{
    t_temp  index;
    int     temp;

    index.i = num->counta;
    temp = num->num_lista[index.i - 1];
    while (--index.i > 0)
        num->num_lista[index.i] = num->num_lista[index.i - 1];
    num->num_lista[0] = temp;
    printf("rra\n");
}

void    ft_rrb(t_num *num)
{
    t_temp  index;
    int     temp;

    index.i = num->countb;
    temp = num->num_listb[index.i - 1];
    while (--index.i > 0)
        num->num_listb[index.i] = num->num_listb[index.i - 1];
    num->num_listb[0] = temp;
    printf("rrb\n");
}

void    ft_rrr(t_num *num)
{
    ft_rra(num);
    ft_rrb(num);
    printf("rrr\n");
}

void    ft_pa(t_num *num)
{
    t_temp  temp;

    if (num->countb != 0)
    {
        num->counta += 1;
        temp.i = num->counta;
        while (--temp.i > 0)
            num->num_lista[temp.i] = num->num_lista[temp.i - 1];
        num->num_lista[0] = num->num_listb[0];
        while (++temp.i < num->countb)
            num->num_listb[temp.i - 1] = num->num_listb[temp.i];
        num->countb -= 1;
        printf("pa\n");  
    }
}

void    ft_pb(t_num *num)
{
    t_temp  temp;

    if (num->counta != 0)
    {
        num->countb += 1;
        temp.i = num->countb;
        while (--temp.i > 0)
            num->num_listb[temp.i] = num->num_listb[temp.i - 1];
        num->num_listb[0] = num->num_lista[0];
        while (++temp.i < num->counta)
            num->num_lista[temp.i - 1] = num->num_lista[temp.i];
        num->counta -= 1;
        printf("pb\n");  
    }
}