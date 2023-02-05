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

void    ft_ra(t_num *num)
{
    t_temp  index;
    int     temp;

    index.i = 0;
    temp = num->num_lista[0];
    while (++index.i < num->counta)
        num->num_lista[index.i - 1] = num->num_lista[index.i];
    num->num_lista[num->counta - 1] = temp;
    printf("ra\n");
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
    printf("rb\n");
}

void    ft_rr(t_num *num)
{
    ft_ra(num);
    ft_rb(num);
    printf("rr\n");
}

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