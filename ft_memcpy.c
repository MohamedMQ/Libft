/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:10:00 by mmaqbour          #+#    #+#             */
/*   Updated: 2022/11/06 12:08:47 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*bufsrc;
	unsigned char	*bufdst;

	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	i = 0;
	bufsrc = (unsigned char *)src;
	bufdst = (unsigned char *)dst;
	while (i < n)
	{
		bufdst[i] = bufsrc[i];
		i++;
	}
	return (dst);
}
