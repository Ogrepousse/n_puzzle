/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 15:58:18 by esusseli          #+#    #+#             */
/*   Updated: 2018/02/15 11:35:54 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "n_puzzle.h"

int		main(int ac, char **av)
{
	t_env	e;
	t_node	*test;

	(void)ac;
	(void)av;
	
	if (ac > 1)
		e.N = ft_atoi(av[1]);
	else
		e.N = 3;
	gen_solution(&e);
	printf("lol\n");
	test = create_node();
	printf("hihi %d\n", test->cost);
	return (0);
}
