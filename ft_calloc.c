/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:08:01 by mmaqbour          #+#    #+#             */
/*   Updated: 2022/11/03 15:03:31 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (count == __SIZE_MAX__ || size == __SIZE_MAX__)
		return (mem = NULL);
	mem = malloc(count * size);
	if (mem)
		ft_bzero(mem, count * size);
	return (mem);
}
