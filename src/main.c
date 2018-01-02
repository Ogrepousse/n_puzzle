/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 15:58:18 by esusseli          #+#    #+#             */
/*   Updated: 2018/01/02 17:52:30 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "n_puzzle.h"

void	print_tab(int s, int **tab)
{
	int		i;
	int		j;

	i = 0;
	while (i < s)
	{
		j = 0;
		while (j < s)
		{
			printf("%d ", tab[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void	gen_solution(t_env *e)
{
	int		i;
	int		j;
	int		N;

	N = e->N;
	e->res = (int **)malloc(sizeof(int *) * N);
	i = 0;
	while (i < N)
	{
		e->res[i] = (int*)malloc(sizeof(int) * N);
		i++;
	}
	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			e->res[i][j] = 0;
			j++;
		}
		i++;
	}
	print_tab(e->N, e->res);
}

int		main(int ac, char **av)
{
	t_env	e;

	(void)ac;
	(void)av;

	e.N = 4;
	gen_solution(&e);
	printf("lol\n");
	return (0);
}
