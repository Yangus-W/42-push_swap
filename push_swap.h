/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <yawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:11:45 by yawang            #+#    #+#             */
/*   Updated: 2024/10/23 16:31:33 by yawang           ###   ########.fr       */
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
	int		small_i;
	int		big_i;
	float	median;
}	t_init;

#endif