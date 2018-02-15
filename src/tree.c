/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 11:00:30 by esusseli          #+#    #+#             */
/*   Updated: 2018/02/15 11:20:49 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "n_puzzle.h"

//probly static
t_node*	create_node(void)
{
	t_node	*node;

	node = (t_node*)malloc(sizeof(t_node));
	ft_memset(node, 0, sizeof(*node));
	return(node);
}


