/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <yawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:18:32 by yawang            #+#    #+#             */
/*   Updated: 2024/11/05 16:23:10 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_init	ps;

	ps.int_a = 0;
	ps.int_b = 0;
	ps.i = 0;
	(void)argv;
	if (argc > 1)
	{
		if (argc == 2)
			two_args_init(&ps, argv);
		if (argc > 2)
			multi_args_init(&ps, argc, argv);
		check_doubles(ps.stack_a, ps.int_a);
		if (check_order(&ps))
			free_stacks(&ps);
		else
		{
			ft_normalize(&ps);
			algorithms(&ps);
		}
		free_stacks(&ps);
	}
}

void	two_args_init(t_init *ps, char **argv)
{
	ps->arguments = ft_split(argv[1], ' ');
	if (!ps->arguments)
		error();
	while (ps->arguments[ps->int_a])
	{
		ps->counter = 0;
		check_non_num(ps->arguments[ps->int_a]);
		ps->int_a++;
	}
	create_stacks(ps);
	while (ps->arguments[ps->i])
	{
		check_max_min(ps->arguments[ps->i]);
		ps->stack_a[ps->i] = ft_atoi(ps->arguments[ps->i]);
		free(ps->arguments[ps->i]);
		ps->i++;
	}
	free(ps->arguments);
}

void	multi_args_init(t_init *ps, int argc, char **argv)
{
	ps->int_a = argc - 1;
	create_stacks(ps);
	while (ps->i < ps->int_a)
	{
		check_non_num(argv[ps-> i + 1]);
		check_max_min(argv[ps->i + 1]);
		ps->stack_a[ps->i] = ft_atoi(argv[ps-> i + 1]);
		ps->i++;
	}
}
