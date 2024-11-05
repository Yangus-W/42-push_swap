/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <yawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:01:34 by yawang            #+#    #+#             */
/*   Updated: 2024/11/02 15:05:25 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_normalize(t_init *s)
{
	int	i;
	int	j;
	int	count;

	init_stack(s);
	i = -1;
	while (++i < s->int_a)
		s->tmp[i] = s->stack_a[i];
	i = 0;
	while (i < s->int_a)
	{
		j = -1;
		count = -1;
		while (++j < s->int_a)
		{
			if (s->tmp[i] < s->tmp[j])
				count++;
		}
		s->stack_a[i] = (s->int_a - 1) - count;
		i++;
	}
	free(s->tmp);
}
