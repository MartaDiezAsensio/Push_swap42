/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:46:17 by huaydin           #+#    #+#             */
/*   Updated: 2023/09/07 17:48:54 by mdiez-as         ###   ########.fr       */
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
