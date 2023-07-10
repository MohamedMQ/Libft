/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:11:42 by mmaqbour          #+#    #+#             */
/*   Updated: 2022/11/05 10:54:30 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*v;

	i = 0;
	v = (char *)s;
	while (v[i])
	{
		if (v[i] == (char)c)
			return (v + i);
		i++;
	}
	if (v[i] == (char)c)
		return (v + i);
	return (NULL);
}
