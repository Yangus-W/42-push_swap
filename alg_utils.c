/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <yawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:01:59 by yawang            #+#    #+#             */
/*   Updated: 2024/10/31 19:36:15 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_alg_help(t_init *s)
{
	ft_rotatea(s);
	ft_swapa(s);
	ft_reverse_rotatea(s);
}

void	push_up(t_init *s)
{
	if (s->min_i < (s->int_a / 2))
	{
		s->i = 0;
		while (s-> i < s->min_i)
		{
			ft_rotatea(s);
			s->i++;
		}
	}
	else if (s->min_i >= (s->int_a / 2))
	{
		s->i = s->int_a;
		while (s->i > s->min_i)
		{
			ft_reverse_rotatea(s);
			s->i--;
		}
	}
}

void	find_smallest(t_init *s)
{
	s->i = 1;
	s->min_i = 0;
	s->min = s->stack_a[0];
	while (s->i < s->int_a)
	{
		if (s->stack_a[s->i] < s->min)
		{
			s->min = s->stack_a[s->i];
			s->min_i = s->i;
			s->i = 1;
		}
		s->i++;
	}
}
