/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <yawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:02:21 by yawang            #+#    #+#             */
/*   Updated: 2024/10/30 19:43:45 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stacks(t_init *ps)
{
	ps->stack_a = malloc(ps->int_a * sizeof(int));
	if (!ps->stack_a)
		error();
	ps->stack_b = malloc(ps->int_a * sizeof(int));
	if (!ps->stack_b)
		error();
}

void	init_stack(t_init *s)
{
	int	size;
	int	i;

	s->tmp = malloc(s->int_a * sizeof(long));
	i = 0;
	size = s->int_a;
	while (i < size)
	{
		s->tmp[i] = s->stack_a[i];
		i++;
	}
}
