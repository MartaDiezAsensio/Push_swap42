/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:49:38 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/09/27 17:49:41 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstsize;
	size_t	srcsize;

	i = 0;
	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	j = dstsize;
	if (dstsize < size && size)
	{
		while (src[i] && dstsize + i < size - 1)
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	if (dstsize >= size)
		dstsize = size;
	return (dstsize + srcsize);
}
