/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <yawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:40:33 by yawang            #+#    #+#             */
/*   Updated: 2024/11/01 15:04:02 by yawang           ###   ########.fr       */
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
		while (s->int_a > 0)
			ft_pusha(s);
		i++;
	}
}
