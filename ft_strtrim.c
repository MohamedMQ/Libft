/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:12:51 by mmaqbour          #+#    #+#             */
/*   Updated: 2022/10/31 11:12:53 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		++i;
	start = i;
	i = ft_strlen(s1);
	if (i)
		--i;
	while (i > 0 && ft_strchr(set, s1[i]) != NULL)
		--i;
	if (start <= i)
		return (ft_substr(s1, start, i - start + 1));
	return (ft_substr(s1, start, 1));
}
