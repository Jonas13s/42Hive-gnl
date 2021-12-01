/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joivanau <joivanau@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:23:25 by joivanau          #+#    #+#             */
/*   Updated: 2021/11/08 14:46:05 by joivanau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	len_d;
	size_t	len_s;
	char	*sc;

	i = 0;
	sc = (char *) s;
	len_d = ft_strlen(d);
	len_s = ft_strlen(sc);
	if (size > len_d)
		x = len_d + len_s;
	else
		x = len_s + size;
	while (sc[i] && (len_d + 1) < size)
	{
		d[len_d] = sc[i];
		i++;
		len_d++;
	}
	d[len_d] = '\0';
	return (x);
}
