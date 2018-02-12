/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 15:58:18 by esusseli          #+#    #+#             */
/*   Updated: 2018/02/12 12:03:31 by esusseli         ###   ########.fr       */
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

void	spiral(t_env *e)
{
	int		i;
	int		j;
	int		xdir;
	int		ydir;
	int		nb;

	i = 0;
	j = 0;
	nb = 1;
	xdir = 1;
	ydir = 0;
	while (nb < e->N * e->N)
	{
		e->res[j][i] = nb++;
		if (xdir)
		{
			if ((i + xdir < e->N && i + xdir >= 0) && e->res[j][i + xdir] == 0)
				i += xdir;
			else
			{
				ydir = xdir;
				xdir = 0;
			}
		}
		if (ydir)
		{
			if ((j + ydir < e->N && j + ydir >= 0) && e->res[j + ydir][i] == 0)
				j += ydir;
			else
			{
				xdir = -ydir;
				ydir = 0;
				i += xdir;
			}
		}
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
	spiral(e);
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
