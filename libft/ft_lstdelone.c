/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joivanau <joivanau@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:54:56 by joivanau          #+#    #+#             */
/*   Updated: 2021/11/12 13:07:04 by joivanau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;

	tmp = *alst;
	if (tmp != NULL)
	{
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = NULL;
	}
	*alst = NULL;
}
