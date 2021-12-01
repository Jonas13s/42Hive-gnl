/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joivanau <joivanau@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:01:08 by joivanau          #+#    #+#             */
/*   Updated: 2021/11/11 14:22:54 by joivanau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, \
int c, size_t n)
{
	size_t				i;
	unsigned char		*des;
	unsigned char		*str;
	unsigned char		st;

	st = (unsigned char) c;
	des = (unsigned char *) dest;
	str = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		des[i] = str[i];
		if (str[i] == st)
			return (des + i + 1);
		i++;
	}
	return (NULL);
}
