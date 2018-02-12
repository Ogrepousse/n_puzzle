/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_puzzle.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 15:56:14 by esusseli          #+#    #+#             */
/*   Updated: 2018/02/12 12:31:50 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef N_PUZZLE_H
# define N_PUZZLE_H

# include "libft.h"
# include <stdio.h>

typedef struct	s_env
{
	int			N;
	int			**res;

}				t_env;

void			gen_solution(t_env *e);
void			print_tab(int s, int **tab);

#endif
