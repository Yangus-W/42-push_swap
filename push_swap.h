/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <yawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:11:45 by yawang            #+#    #+#             */
/*   Updated: 2024/11/05 17:23:36 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf/ft_printf.h"
# include "ft_printf/libft/libft.h"
# include <stdlib.h>

typedef struct s_init
{
	char	**arguments;
	int		*stack_a;
	int		*stack_b;
	int		*tmp;
	int		int_a;
	int		int_b;
	int		min;
	int		i;
	int		j;
	int		counter;
	int		min_i;
	int		max_i;
}	t_init;

/* main.c */
void	two_args_init(t_init *ps, char **argv);
void	multi_args_init(t_init *ps, int argc, char **argv);

/* rules1/2/3.c */
void	ft_swapa(t_init *s);
void	ft_swapb(t_init *s);
void	ft_swaps(t_init	*s);
void	ft_pusha(t_init *s);
void	ft_pushb(t_init *s);
void	ft_rotatea(t_init *s);
void	ft_rotateb(t_init *s);
void	ft_rotater(t_init *s);
void	ft_reverse_rotatea(t_init *s);
void	ft_reverse_rotateb(t_init *s);
void	ft_reverse_rotater(t_init *s);

/* algorithms1/2.c */
void	algorithms(t_init *s);
void	large_int_alg(t_init *s);
void	two_int_alg(t_init *s);
void	three_int_alg(t_init *s);
void	four_int_alg(t_init *s);
void	five_int_alg(t_init *s);

/* alg_utils.c */
void	three_alg_help(t_init *s);
void	push_up(t_init *s);
void	find_smallest(t_init *s);

/* checks.c */
int		check_order(t_init *s);
void	check_non_num(char *str);
void	check_max_min(char *str);
void	check_doubles(int *tab, int len);

/* errors.c */
int		error(void);

/* free.c */
void	free_stacks(t_init *s);

/* helpers.c */
void	create_stacks(t_init *s);
void	init_stack(t_init *s);

/* normalize */
void	ft_normalize(t_init *s);

#endif