/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joivanau <joivanau@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:57:57 by joivanau          #+#    #+#             */
/*   Updated: 2021/11/26 23:40:06 by joivanau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		st;
	unsigned char		*str;
	void				*ptr;

	ptr = (void *) s;
	str = (unsigned char *) s;
	st = (unsigned char) c;
	i = -1;
	while (++i < n)
		if (str[i] == st)
			return (ptr + i);
	return (NULL);
}
