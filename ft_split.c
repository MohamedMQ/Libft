/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:11:37 by mmaqbour          #+#    #+#             */
/*   Updated: 2022/11/05 10:54:50 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_word_nb(char const *s, char c)
{
	int	nb_mots;
	int	i;

	nb_mots = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			nb_mots++;
		if (s[i] != c && (i > 0 && s[i - 1] == c))
			nb_mots++;
		i++;
	}
	return (nb_mots);
}

char	*walkthrough_str(char *ptr, char c, int i)
{
	char			*mot;
	static char		*rem;

	mot = NULL;
	if (i)
		ptr = rem;
	while (*ptr)
	{
		if (i == 0 && *ptr != c)
		{
			mot = ptr;
			break ;
		}
		if (*ptr != c && *(ptr - 1) == c && i - 1 >= 0)
		{
			mot = ptr;
			break ;
		}
		ptr = ptr + 1;
		i++;
	}
	if (*(ptr + 1) != '\0')
		rem = ptr + 1;
	return (mot);
}

char	*isolate_word(char *mot, size_t size)
{
	char		*tmp;
	size_t		end;
	size_t		char_size;

	end = size + 1;
	char_size = sizeof(char);
	tmp = ft_strdup(mot);
	mot = ft_calloc(end, char_size);
	mot = (char *)ft_memmove(mot, tmp, size);
	free(tmp);
	tmp = NULL;
	return (mot);
}

size_t	cut_word(char *mot, char c)
{
	size_t	size;

	size = 0;
	while (mot[size] != '\0' && mot[size] != c)
		size++;
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		nb_mots;
	char	*ptr_s;
	int		i;
	size_t	word_size;

	if (!s)
		return (NULL);
	i = 0;
	ptr_s = (char *)s;
	nb_mots = get_word_nb(s, c);
	(split = (char **)malloc(sizeof(char *) * (nb_mots + 1)));
	if (!split)
		return (NULL);
	while (i < nb_mots)
	{
		split[i] = walkthrough_str(ptr_s, c, i);
		word_size = cut_word(split[i], c);
		split[i] = isolate_word(split[i], word_size);
		i++;
	}
	split[i] = NULL;
	return (split);
}
