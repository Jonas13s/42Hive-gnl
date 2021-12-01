/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joivanau <joivanau@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:46:46 by joivanau          #+#    #+#             */
/*   Updated: 2021/11/10 16:10:43 by joivanau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	x;
	char	*str;

	str = (char *) s;
	x = ft_strlen(s);
	i = 0;
	while (i <= x)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}
