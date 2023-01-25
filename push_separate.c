#include "push_swap.h"

void	ft_close()
{
    write(1, "Closed\n", 7);
    exit(0);
}

void    ft_num_checker(char *str)
{
    t_temp  temp;

    temp.i = 0;
    while (str[temp.i])
    {
        while (str[temp.i] == 32 || str[temp.i] == '\t')
            temp.i++;
        if (str[temp.i] == '-' || str[temp.i] == '+')
            temp.i++;
        while (str[temp.i] >= '0' && str[temp.i] <= '9')
            temp.i++;
        if (!(str[temp.i] == 32 || str[temp.i] == '\t' 
            || str[temp.i] == '\0'))
            ft_close();
    }
}

void	ft_separate(char **str)
{
    t_temp  temp;

    temp.i = 0;
    while (str[++temp.i])
        ft_num_checker(str[temp.i]);
}