/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:08:41 by mmaqbour          #+#    #+#             */
/*   Updated: 2022/11/06 11:51:00 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	taille_str(long long int n)
{
	int	i;

	i = 1;
	if (n < 0)
		n = n * -1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*rempli_str(char *str, long long int n, int len)
{
	int	debut;

	len = len - 1;
	str[len] = '\0';
	len = len - 1;
	if (n < 0)
	{
		n = n * -1;
		debut = 1;
		str[0] = '-';
	}
	else
		debut = 0;
	while (len >= debut)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	long long int	lln;

	lln = n;
	len = taille_str(lln);
	len = len + 1;
	if (lln < 0)
	{
		len = len + 1;
		str = ft_calloc(len, sizeof(char));
	}
	else
		str = ft_calloc(len, sizeof(char));
	if (!str)
		return (NULL);
	str = rempli_str(str, lln, len);
	return (str);
}
