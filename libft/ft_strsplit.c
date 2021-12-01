/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joivanau <joivanau@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:07:48 by joivanau          #+#    #+#             */
/*   Updated: 2021/11/12 12:39:46 by joivanau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strsplit_words(char const *s, char c)
{
	int	i;
	int	count;
	int	on;

	on = 1;
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			on = 1;
		if (s[i] != c && on == 1)
		{
			on = 0;
			count++;
		}
		i++;
	}
	return (count);
}

static int	strsplit_word_count(char const *s, \
char c, int l)
{
	int	i;
	int	count;
	int	on;
	int	cc;

	cc = 0;
	count = 0;
	i = 0;
	on = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			on = 1;
		if (s[i] != c && on == 1)
		{
			on = 0;
			count++;
		}
		if (count == l)
			cc++;
		i++;
	}
	if (s[i - 1] != c && l == count)
		cc++;
	return (cc);
}

static int	strsplit_word_pos(char const *s, char c, int l)
{
	int	i;
	int	count;
	int	on;

	on = 1;
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			on = 1;
		if (s[i] != c && on == 1)
		{
			on = 0;
			count++;
		}
		if (l == count)
			return (i);
		i++;
	}
	return (0);
}

static char	*strsplit_word(char const *s, char c, int l)
{
	int		i;
	int		k;
	char	*str;

	str = (char *) malloc(strsplit_word_count(s, c, l));
	i = strsplit_word_pos(s, c, l);
	k = 0;
	while (s[i] != c && s[i] != '\0')
	{
		str[k] = s[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		count;
	int		i;

	i = 1;
	if (!s)
		return (NULL);
	count = strsplit_words(s, c);
	str = (char **) malloc(sizeof(char *) * count);
	if (!str)
		return (NULL);
	while (i <= count)
	{
		str[i - 1] = (char *) malloc(sizeof(char) * \
		strsplit_word_count(s, c, i));
		i++;
	}
	i = 1;
	while (i <= count)
	{
		str[i - 1] = strsplit_word(s, c, i);
		i++;
	}
	str[i - 1] = NULL;
	return (str);
}
