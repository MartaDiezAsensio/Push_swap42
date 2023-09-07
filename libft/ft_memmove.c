/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:13:42 by huaydin           #+#    #+#             */
/*   Updated: 2023/09/07 17:50:10 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dst_p;
	char	*src_p;
	size_t	i;

	i = 0;
	dst_p = (char *)dst;
	src_p = (char *)src;
	if (src == dst || !n)
		return (dst);
	if (src_p < dst_p)
	{
		while (++i <= n)
		{
			dst_p[n - i] = src_p[n - i];
		}
	}
	else
		while (n-- > 0)
			*dst_p++ = *src_p++;
	return (dst);
}
