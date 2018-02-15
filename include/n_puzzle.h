/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_puzzle.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 15:56:14 by esusseli          #+#    #+#             */
/*   Updated: 2018/02/15 11:34:17 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef N_PUZZLE_H
# define N_PUZZLE_H

# include "libft.h"
# include <stdio.h>

typedef struct	s_node t_node;

typedef struct	s_env
{
	int			N;
	int			**res;
	t_node		**tree;
}				t_env;

struct	s_node
{
	t_node		*father;
	t_node		*up;
	t_node		*down;
	t_node		*left;
	t_node		*right;
	int			cost;
	int			weight;
	int			**tab;
};

void			gen_solution(t_env *e);
void			print_tab(int s, int **tab);
t_node*			create_node(void);

#endif
