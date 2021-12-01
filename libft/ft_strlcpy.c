/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joivanau <joivanau@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:08:01 by joivanau          #+#    #+#             */
/*   Updated: 2021/11/12 12:31:10 by joivanau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t dstsize)
{
	size_t	i;
	size_t	x;
	size_t	len_s;
	char	*sc;

	i = 0;
	sc = (char *) s;
	x = 0;
	len_s = 0;
	len_s = ft_strlen(sc);
	if (dstsize == 0)
		return (len_s);
	while (sc[i] && (x) < dstsize - 1)
	{
		d[x] = sc[i];
		i++;
		x++;
	}
	d[x] = '\0';
	return (len_s);
}
