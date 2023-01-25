#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>


typedef struct  s_num
{
    int *num_list;
}   t_num;

typedef struct  t_temp
{
    int i;
    int j;
    int k;
}   t_temp;

void    ft_separate(char **str);

#endif