#include "push_swap.h"

int main(int argc, char **argv)
{
    t_num   num;

    num.argc = argc;
    ft_separate(&num, argv);
    if (argc - 1 > num.counta)
        ft_error(&num);
    if (ft_sort_check(&num) == num.counta - 1)
        ft_close(&num);
    if (ft_repeat_num(&num))
        ft_error(&num);
    ft_part(&num);
    ft_close(&num);
    exit(0);
}