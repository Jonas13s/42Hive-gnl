/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joivanau <joivanau@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:39:52 by joivanau          #+#    #+#             */
/*   Updated: 2021/11/11 14:20:56 by joivanau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *d, const char *s, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = ft_strlen(d);
	while (i < len)
	{
		if (s[i] != '\0')
			d[x] = s[i];
		if (s[i] == '\0')
			break ;
		i++;
		x++;
	}
	d[x] = '\0';
	return (d);
}
