/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joivanau <joivanau@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:07:30 by joivanau          #+#    #+#             */
/*   Updated: 2021/11/08 12:55:00 by joivanau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	x;
	int	k;

	k = 0;
	i = 0;
	x = -1;
	while (s[k] != '\0')
		k++;
	while (i <= k)
	{
		if (s[i] == c)
			x = i;
		i++;
	}
	if (x == -1)
		return (NULL);
	else
		return ((char *) &s[x]);
}
