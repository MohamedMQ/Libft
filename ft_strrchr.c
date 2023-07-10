/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:12:46 by mmaqbour          #+#    #+#             */
/*   Updated: 2022/11/05 10:23:35 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*v;

	i = ft_strlen(s);
	v = (char *)s;
	while (i >= 0)
	{
		if (v[i] == (char)c)
			return (v + i);
		i--;
	}
	return (NULL);
}
