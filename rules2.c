/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <yawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:06:13 by yawang            #+#    #+#             */
/*   Updated: 2024/10/28 15:10:37 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one. */
void	ft_rotatea(t_init *s)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = s->stack_a[i];
	while (i < s->int_a - 1)
	{
		s->stack_a[i] = s->stack_a[i + 1];
		i++;
	}
	s->stack_a[i] = tmp;
	if (s->counter == 0)
		ft_printf("ra\n");
}

/* rb (rotate b): Shift up all elements of stack b by 1. 
The first element becomes the last one. */
void	ft_rotateb(t_init *s)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = s->stack_b[i];
	while (i < s->int_b - 1)
	{
		s->stack_b[i] = s->stack_b[i + 1];
		i++;
	}
	s->stack_b[i] = tmp;
	if (s->counter == 0)
		ft_printf("rb\n");
}

/* rr : ra and rb at the same time. */
void	ft_rotater(t_init *s)
{
	s->counter = 1;
	ft_rotatea(s);
	ft_rotateb(s);
	ft_printf("rr\n");
	s->counter = 0;
}