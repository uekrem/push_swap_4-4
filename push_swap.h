#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>
typedef struct  s_num
{
    int *num_list;
    int argc;
    int count;
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

#endif