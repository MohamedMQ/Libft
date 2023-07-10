/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:10:07 by mmaqbour          #+#    #+#             */
/*   Updated: 2022/11/06 12:10:29 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*buf_dst;
	unsigned char	*buf_src;

	if (len > 0 && dst > src)
	{
		buf_dst = (unsigned char *)dst;
		buf_src = (unsigned char *)src;
		i = len - 1;
		while (i > 0)
		{
			buf_dst[i] = buf_src[i];
			i--;
		}
		buf_dst[0] = buf_src[0];
	}
	else if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}
