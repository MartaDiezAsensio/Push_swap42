/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:54:00 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/09/27 17:54:02 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_p;
	unsigned char	*s2_p;

	s1_p = (unsigned char *)s1;
	s2_p = (unsigned char *)s2;
	while (n--)
	{
		if (*s1_p != *s2_p)
			return (*s1_p - *s2_p);
		s1_p++;
		s2_p++;
	}
	return (0);
}
