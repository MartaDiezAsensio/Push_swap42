/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:47:29 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/09/27 17:47:31 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*mylist;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	mylist = ft_lstlast(*lst);
	mylist->next = new;
}
