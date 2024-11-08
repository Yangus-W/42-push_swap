/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <yawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:40:33 by yawang            #+#    #+#             */
/*   Updated: 2024/11/08 18:07:06 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	large_int_alg(t_init *s)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = s->int_a;
	while (!check_order(s))
	{
		j = 0;
		while (j < size && !check_order(s))
		{
			j++;
			if (((s->stack_a[0] >> i) & 1) == 0)
				ft_pushb(s);
			else
				ft_rotatea(s);
		}
		while (s->int_b > 0)
			ft_pusha(s);
		i++;
	}
}

void	algorithms(t_init *s)
{
	if (s->int_a == 2)
		two_int_alg(s);
	else if (s->int_a == 3)
		three_int_alg(s);
	else if (s->int_a == 4)
		four_int_alg(s);
	else if (s->int_a == 5)
		five_int_alg(s);
	else if (s->int_a > 5)
		large_int_alg(s);
}
