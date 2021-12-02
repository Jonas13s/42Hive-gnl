/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joivanau <joivanau@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:05:39 by joivanau          #+#    #+#             */
/*   Updated: 2021/12/02 21:05:26 by joivanau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_first_line(char *sbuf, char **line, int *error)
{
	ssize_t		i;
	char	*temp;
	ssize_t	strlength;

	i = 0;
	strlength = ft_strlen(sbuf);
	while (sbuf[i] != '\n' && sbuf[i] != '\0')
		i++;
	if (i > 0 && sbuf != NULL)
	{
		ft_strdel(line);
		*line = ft_strsub(sbuf, 0, i);
	}
	if (i + 1 <= strlength)
	{
		temp = ft_strsub(sbuf, i + 1, strlength - 1);
		ft_strdel(&sbuf);
		sbuf = ft_strupdate(temp, "\0");
		*error = 1;
	}
	if (i + 1 >= strlength)
		ft_strdel(&sbuf);
	if (i != 0)
		*error = 1;
	return (sbuf);
}

static char	*read_line(const int fd, char *sbuf, int *error)
{
	ssize_t		bytes_read;
	char		*buf;

	buf = (char *) ft_calloc(BUFF_SIZE + 1, sizeof(char));
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buf, BUFF_SIZE);
		if (bytes_read <= 0)
			break ;
		buf[bytes_read] = '\0';
		if (sbuf == NULL && buf != NULL)
			sbuf = ft_strjoin(buf, "\0");
		else
			sbuf = ft_strupdate(sbuf, buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	ft_strdel(&buf);
	if (bytes_read == -1)
		ft_strdel(&sbuf);
	*error = bytes_read;
	return (sbuf);
}

int	get_next_line(const int fd, char **line)
{
	static char	*sbuf[MAX_FD];
	int			error;

	if (line == NULL || fd < 0 || BUFF_SIZE <= 0 || fd > MAX_FD)
		return (-1);
	*line = ft_strdup("");
	error = 0;
	sbuf[fd] = read_line(fd, sbuf[fd], &error);
	if (error == -1 || sbuf[fd] == NULL)
		return (error);
	sbuf[fd] = get_first_line(sbuf[fd], line, &error);
	return (error);
}
