/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:55:26 by iestero-          #+#    #+#             */
/*   Updated: 2022/12/17 15:10:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*node;
	int		i;

	if (lst == NULL)
		return (0);
	i = 1;
	node = lst;
	while (node -> next != NULL)
	{
		node = node -> next;
		i++;
	}
	return (i);
}
