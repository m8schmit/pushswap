/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmit <mschmit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/12 14:23:29 by mschmit           #+#    #+#             */
/*   Updated: 2014/05/14 17:28:34 by mschmit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct		s_list
{
	int				nbr;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

void				swap(t_list *list);
void				sa(t_list *l_a);
void				sb(t_list *l_b);
void				ss(t_list **l_a, t_list **l_b);

void				pa(t_list **l_a, t_list **l_b);
void				pb(t_list **l_a, t_list **l_b);

t_list				*ra(t_list *l_a);
t_list				*rb(t_list *l_b);
void				rr(t_list **l_a, t_list **l_b);

t_list				*rra(t_list *l_a);
t_list				*rrb(t_list *l_b);
void				rrr(t_list **l_a, t_list **l_b);

t_list				*lst_init(int nbr);
t_list				*lst_add(t_list *list, t_list *new);
t_list				*lst_add_head(t_list *list, t_list *new);
void				lst_free(t_list *list);
t_list				*lst_erase(t_list *list, int flag);
void				lst_print(t_list *list, int rev);

void				sort(t_list *l_a);
int					srch_min(t_list **l_a);

#endif
