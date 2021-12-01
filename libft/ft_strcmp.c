/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joivanau <joivanau@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:29:56 by joivanau          #+#    #+#             */
/*   Updated: 2021/11/12 18:39:59 by joivanau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t				i;
	unsigned char		*s1s;
	unsigned char		*s2s;

	s1s = (unsigned char *) s1;
	s2s = (unsigned char *) s2;
	i = 0;
	while (s1s[i] == s2s[i] && s1s[i] != '\0' && s2s[i] != '\0')
		i++;
	return (s1s[i] - s2s[i]);
}
