/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:01:56 by iestero-          #+#    #+#             */
/*   Updated: 2023/01/16 17:05:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_node
{
	void			*content;
	int				number;
	int				key;
	struct s_node	*left;
	struct s_node	*right;
}	t_tree;

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

int				ft_atoi(const char *str);

int				ft_toupper(int c);

int				ft_tolower(int c);

int				ft_strncmp(const char *s1, const char *s2, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

size_t			ft_strlen(const char *s);

size_t			ft_strlcat(char *dst, const char *src, size_t size);

void			ft_bzero(void *s, size_t n);

void			ft_striteri(char *s, void (*f)(unsigned int, char*));

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(char *s, int fd);

void			ft_putendl_fd(char *s, int fd);

void			ft_putnbr_fd(int n, int fd);

void			*ft_memset(void *b, int c, size_t len);

void			*ft_memcpy(void *dst,
					const void *src, size_t n);

void			*ft_memchr(const void *s, int c, size_t n);

void			*ft_memmove(void *str1, const void *str2, size_t n);

void			*ft_calloc(size_t count, size_t size);

char			*ft_strchr(const char *s, int c);

char			*ft_strrchr(const char *s, int c);

char			*ft_strnstr(const char *haystack,
					const char *needle, size_t len);

char			*ft_strdup(const char *s1);

char			*ft_substr(char const *s, unsigned int start, size_t len);

char			*ft_strtrim(char const *s1, char const *set);

char			**ft_split(char const *s, char c);

char			*ft_itoa(int n);

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char			*ft_strjoin(char const *s1, char const *s2);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

t_list			*ft_lstnew(void *content);

t_list			*ft_lstlast(t_list *lst);

int				ft_lstsize(t_list *lst);

void			ft_lstadd_front(t_list **lst, t_list *new);

void			ft_lstadd_back(t_list **lst, t_list *new);

void			ft_lstdelone(t_list *lst, void (*del)(void *));

void			ft_lstclear(t_list **lst, void (*del)(void *));

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

void			ft_lstiter(t_list *lst, void (*f)(void *));

t_tree			*ft_new_node(int key, void *content, int number);

t_tree			*ft_find_node(int key, t_tree *root);

void			ft_insert_node(t_tree **node, int key, void *content,
					int number);

void			ft_clean_tree(t_tree **root);

#endif