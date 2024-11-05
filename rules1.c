/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <yawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:24:24 by yawang            #+#    #+#             */
/*   Updated: 2024/11/05 16:23:46 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* sa (swap a): Swap the first 2 elements at the top of stack a. 
Do nothing if there is only one or no elements. */
void	ft_swapa(t_init *s)
{
	int	tmp;

	if (s->int_a > 1)
	{
		tmp = s->stack_a[0];
		s->stack_a[0] = s->stack_a[1];
		s->stack_a[1] = tmp;
		if (s->counter == 0)
			ft_printf("sa\n");
	}
}

/* sb (swap b): Swap the first 2 elements at the top of stack b. 
Do nothing if there is only one or no elements. */
void	ft_swapb(t_init *s)
{
	int	tmp;

	if (s->int_b > 1)
	{
		tmp = s->stack_b[0];
		s->stack_a[0] = s->stack_b[1];
		s->stack_b[1] = tmp;
		if (s->counter == 0)
			ft_printf("sb\n");
	}
}

/* ss : sa and sb at the same time. */
void	ft_swaps(t_init *s)
{
	s->counter = 1;
	ft_swapa(s);
	ft_swapb(s);
	ft_printf("ss\n");
	s->counter = 0;
}

/* pa (push a): Take the first element at the top of b 
and put it at the top of a. Do nothing if b is empty. */
void	ft_pusha(t_init *s)
{
	int	i_a;
	int	i_b;

	i_b = 0;
	if (s->int_b > 0)
	{
		s->int_a += 1;
		i_a = s->int_a;
		while (--i_a > 0)
			s->stack_a[i_a] = s->stack_a[i_a - 1];
		s->stack_a[i_a] = s->stack_b[i_a];
		s->int_b -= 1;
		i_b = s->int_b;
		while (i_a < i_b)
		{
			s->stack_b[i_a] = s->stack_b[i_a + 1];
			i_a++;
		}
		s->stack_b[i_a] = 0;
		ft_printf("pa\n");
	}
}

/* pb (push b): Take the first element at the top of a 
and put it at the top of b. Do nothing if a is empty. */
void	ft_pushb(t_init *s)
{
	int	i_a;
	int	i_b;

	i_a = 0;
	if (s->int_a > 0)
	{
		s->int_b += 1;
		i_b = s->int_b;
		while (--i_b > 0)
			s->stack_b[i_b] = s->stack_b[i_b - 1];
		s->stack_b[i_b] = s->stack_a[i_b];
		s->int_a -= 1;
		i_a = s->int_a;
		while (i_b < i_a)
		{
			s->stack_a[i_b] = s->stack_a[i_b + 1];
			i_b++;
		}
		s->stack_a[i_b] = 0;
		ft_printf("pb\n");
	}
}
