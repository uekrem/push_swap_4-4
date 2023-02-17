/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hekrem <hekrem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:09:44 by hekrem            #+#    #+#             */
/*   Updated: 2023/02/17 14:38:57 by hekrem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_num
{
	int		*num_lista;
	int		*num_listb;
	int		*num_bubble;
	char	**strings;
	int		dont_len;
	int		argc;
	int		counta;
	int		countb;
}			t_num;

typedef struct t_temp
{
	int		i;
	int		j;
	int		k;
}			t_temp;

void		ft_separate(t_num *num, char **str);
char		**ft_split(t_num *num, char **str);
int			ft_atoi(char *nptr, t_num *num);
void		ft_sa(t_num *num);
void		ft_sb(t_num *num);
void		ft_ss(t_num *num);
void		ft_ra(t_num *num);
void		ft_rb(t_num *num);
void		ft_rr(t_num *num);
void		ft_rra(t_num *num);
void		ft_rrb(t_num *num);
void		ft_rrr(t_num *num);
void		ft_pa(t_num *num);
void		ft_pb(t_num *num);
void		ft_part(t_num *num);
int			ft_num_small(t_num *num);
void		ft_radix(t_num *num);
int			ft_error(t_num *num);
void		ft_close(t_num *num);
int			ft_sort_check(t_num *num);
int			ft_repeat_num(t_num *num);
int			ft_find_bubble(t_num *num, int find_value);
int			ft_check_bitwise(t_num *num, int bitwise);

#endif
