/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmit <mschmit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/13 15:02:24 by mschmit           #+#    #+#             */
/*   Updated: 2014/05/14 17:53:33 by mschmit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"
#include "libft.h"

void	pa(t_list **l_a, t_list **l_b)
{
	int	tmp;

	tmp = 0;
	if ((*l_b) != NULL)
	{
		tmp = (*l_b)->nbr;
		*l_b = lst_erase(*l_b, 0);
		*l_a = lst_add_head(*l_a, lst_init(tmp));
	}
	else
	{
		write(2, "error\n", 6);
		exit(0);
		}
	write(1, "pa ", 3);
}

void	pb(t_list **l_a, t_list **l_b)
{
	int	tmp;

	tmp = 0;
	if ((*l_a) != NULL)
	{
		tmp = (*l_a)->nbr;
		*l_a = lst_erase(*l_a, 0);
		*l_b = lst_add_head(*l_b, lst_init(tmp));
	}
	else
	{
		write(2, "error\n", 6);
		exit(0);
		}
	write(1, "pb ", 3);
}
