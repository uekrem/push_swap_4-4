#include "push_swap.h"

void	ft_close(t_num *num)
{
    free(num->num_lista);
    free(num->num_listb);
    write(1, "Closed\n", 7);
    system("leaks a.out");
    exit(0);
}

void    ft_num_checker(t_num *num, char *str)
{
    t_temp  temp;

    temp.i = 0;
    num->counta = 0;
    while (str[temp.i])
    {
        while (str[temp.i] == 32 || str[temp.i] == '\t')
            temp.i++;
        if ((str[temp.i] == '-' || str[temp.i] == '+')
            && (str[temp.i + 1] >= '0' && str[temp.i + 1] <= '9'))          // tek bir - + önleme
            temp.i++;
        while (str[temp.i] >= '0' && str[temp.i] <= '9')
            temp.i++;
        if (str[temp.i - 1] >= '0' && str[temp.i - 1] <= '9')               //sona sadece boşlıklar koyuca +1 karakter
            num->counta += 1;
        if (!(str[temp.i] == 32 || str[temp.i] == '\t' 
            || str[temp.i] == '\0'))
            ft_close(num);
    }
}

void	ft_separate(t_num *num, char **str)
{
    char    **strings;
    t_temp  temp;

    temp.i = 0;
    while (str[++temp.i])
        ft_num_checker(num, str[temp.i]);
    strings = ft_split(num, str);
    num->num_lista = malloc(sizeof(int) * num->counta);
    num->num_listb = malloc(sizeof(int) * num->counta);
    temp.i = -1;
    while (strings[++temp.i])
        num->num_lista[temp.i] = ft_atoi(strings[temp.i]);
    num->countb = 0;
}