/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmit <mschmit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/12 14:46:46 by mschmit           #+#    #+#             */
/*   Updated: 2014/05/14 17:36:07 by mschmit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "push_swap.h"

void	check_nbr(char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]) && nbr[i] != '-')
		{
			write(2, "error\n", 5);
			exit(0);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	t_list	*l_a;

	l_a = NULL;
	i = 1;
	if (ac > 2)
	{
		while (i < ac)
		{
			check_nbr(av[i]);
			l_a = lst_add(l_a, lst_init(ft_atoi(av[i])));
			i++;
		}
		sort(l_a);
	}
	else
	{
		write(2, "error\n", 5);
	}
	lst_free(l_a);
	return (0);
}
