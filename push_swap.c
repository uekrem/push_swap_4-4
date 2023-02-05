#include "push_swap.h"

int main(int argc, char **argv)
{
    t_num   num;

    num.argc = argc;
    ft_separate(&num, argv);
    ft_part(&num);
    //printf("%d", num.num_lista[0]);
}