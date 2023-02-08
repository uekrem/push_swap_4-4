#include "push_swap.h"

void    ft_close(t_num *num)
{
    int i;

    i = -1;
    free(num->num_lista);
    free(num->num_listb);
    free(num->num_bubble);
    while (++i < num->counta)
        free(num->strings[i]);
    exit(0);
}

int ft_error(t_num *num)
{
    int i;

    i = -1;
    free(num->num_lista);
    free(num->num_listb);
    free(num->num_bubble);
    while (++i < num->counta)
        free(num->strings[i]);
    write(1,"error\n",6);
    exit(0);
}

void    ft_num_checker(t_num *num, char *str)
{
    t_temp  temp;

    temp.i = 0;
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
                exit(0);
    }
}

void	ft_separate(t_num *num, char **str)
{
    t_temp  temp;

    temp.i = 0;
    num->counta = 0;
    while (str[++temp.i])
        ft_num_checker(num, str[temp.i]);
    num->strings = ft_split(num, str);
    num->num_lista = malloc(sizeof(int) * num->counta);
    num->num_listb = malloc(sizeof(int) * num->counta);
    num->num_bubble = malloc(sizeof(int) * num->counta);
    temp.i = -1;
    while (num->strings[++temp.i])
        num->num_lista[temp.i] = ft_atoi(num->strings[temp.i], num);
    temp.i = -1;
    while (num->strings[++temp.i])
        num->num_bubble[temp.i] = ft_atoi(num->strings[temp.i], num);
    num->countb = 0;
}