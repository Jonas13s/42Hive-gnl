/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joivanau <joivanau@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:38:11 by joivanau          #+#    #+#             */
/*   Updated: 2021/11/29 17:29:48 by joivanau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
/*	PART I FUNCTIONS	*/
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
char	*ft_memcpy(void *d, const void *s, size_t n);
void	*ft_memccpy(void *dest, const void *src, \
int c, size_t n);
void	*ft_memmove(void *d, const void *s, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *d, const char *s);
char	*ft_strncpy(char *d, const char *s, size_t n);
char	*ft_strcat(char *d, const char *s);
char	*ft_strncat(char *d, const char *s, size_t len);
size_t	ft_strlcat(char *d, const char *s, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
/*	PART II FUNCTIONS	*/
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_bzero(void *s, size_t n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	*ft_itoa(int n);
char	**ft_strsplit(char const *s, char c);
/*	ADDTIONAL FUNCTIONS	*/
int		ft_isspace(int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_lstsize(t_list *lst);
int		ft_strisnumeric(char *s);
int		ft_strisprintable(char *s);
int		ft_isblank(int c);
int		ft_strisalpha(char *s);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strupdate(char *s1, const char *s2);
/*	BONUS	*/
t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
#endif
