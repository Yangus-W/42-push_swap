/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <yawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:56:35 by yawang            #+#    #+#             */
/*   Updated: 2024/10/28 15:36:41 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one. */
void	ft_reverse_rotatea(t_init *s)
{
	int	tmp;
	int	i;

	i = s->int_a - 1;
	tmp = s->stack_a[i];
	while (i > 0)
	{
		s->stack_a[i] = s->stack_a[i - 1];
		i--;
	}
	s->stack_a[i] = tmp;
	if (s->counter == 0)
		ft_printf("rra\n");
}

/* rrb (reverse rotate b): Shift down all elements of stack b by 1. 
The last element becomes the first one. */
void	ft_reverse_rotateb(t_init *s)
{
	int	tmp;
	int	i;

	i = s->int_b - 1;
	tmp = s->stack_b[i];
	while (i > 0)
	{
		s->stack_b[i] = s->stack_b[i - 1];
		i--;
	}
	s->stack_b[i] = tmp;
	if (s->counter == 0)
		ft_printf("rrb\n");
}

/* rrr : rra and rrb at the same time. */
void	ft_reverse_rotater(t_init *s)
{
	s->counter = 1;
	ft_reverse_rotatea(s);
	ft_reverse_rotatea(s);
	ft_printf("rrr\n");
	s->counter = 0;
}
