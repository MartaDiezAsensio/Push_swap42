/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:54:17 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/09/27 17:54:19 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mylist;

	mylist = (t_list *) malloc(sizeof(t_list));
	if (!mylist)
		return (NULL);
	mylist->content = content;
	mylist->next = NULL;
	return (mylist);
}
