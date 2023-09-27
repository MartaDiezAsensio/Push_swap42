/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:54:28 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/09/27 17:54:30 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*mylist;

	if (!lst)
		return (lst);
	mylist = lst;
	while (mylist != NULL)
	{
		if (mylist->next == NULL)
			return (mylist);
		mylist = mylist->next;
	}
	return (0);
}
