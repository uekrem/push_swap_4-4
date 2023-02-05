#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>
typedef struct  s_num
{
    int *num_lista;
    int *num_listb;
    int argc;
    int counta;
    int countb;
}   t_num;

typedef struct  t_temp
{
    int i;
    int j;
    int k;
}   t_temp;

void	ft_separate(t_num *num, char **str);
char	**ft_split(t_num *num, char **str);
int     ft_atoi(char *nptr);
void    ft_sa(t_num *num);
void    ft_sb(t_num *num);
void    ft_ss(t_num *num);
void    ft_ra(t_num *num);
void    ft_rb(t_num *num);
void    ft_rr(t_num *num);
void    ft_rra(t_num *num);
void    ft_rrb(t_num *num);
void    ft_rrr(t_num *num);
void    ft_pa(t_num *num);
void    ft_pb(t_num *num);
void    ft_part(t_num *num);
int	ft_num_small(t_num *num);

#endif