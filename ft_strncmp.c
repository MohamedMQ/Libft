/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:12:34 by mmaqbour          #+#    #+#             */
/*   Updated: 2022/11/02 09:27:05 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*v;
	unsigned char	*b;

	i = 0;
	v = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (v[i] == b[i]
		&& v[i] != '\0' && b[i] != '\0' && i < n - 1)
		i++;
	if (n > 0)
		return (v[i] - b[i]);
	else
		return (0);
}
