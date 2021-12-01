/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joivanau <joivanau@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:33:50 by joivanau          #+#    #+#             */
/*   Updated: 2021/11/29 16:59:03 by joivanau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		k;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	str = (char *) malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	k = ft_strlen(s2);
	while (k > 0)
	{
		str[i] = s2[ft_strlen(s2) - k];
		i++;
		k--;
	}
	str[i] = '\0';
	return (str);
}
