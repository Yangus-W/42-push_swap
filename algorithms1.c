/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <yawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:52:33 by yawang            #+#    #+#             */
/*   Updated: 2024/10/31 19:35:33 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_int_alg(t_init *s)
{
	if (s->stack_a[0] > s->stack_a[1])
		ft_swapa(s);
}

void	three_int_alg(t_init *s)
{
	if (s->stack_a[0] > s->stack_a[1])
	{
		if (s->stack_a[1] < s->stack_a[2])
		{
			if (s->stack_a[0] > s->stack_a[2])
				ft_rotatea(s);
			else
				ft_swapa(s);
		}
		else
		{
			ft_swapa(s);
			ft_reverse_rotatea(s);
		}
	}
	else
	{
		if (s->stack_a[0] > s->stack_a[2])
			ft_reverse_rotatea(s);
		else
			three_alg_help(s);
	}
}

void	four_int_alg(t_init *s)
{
	find_smallest(s);
	push_up(s);
	if (!check_order(s))
	{
		ft_pushb(s);
		three_int_alg(s);
		ft_pusha(s);
	}
}
