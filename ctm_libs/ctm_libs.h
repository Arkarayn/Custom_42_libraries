/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctm_libs.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmattei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:49:02 by gmattei           #+#    #+#             */
/*   Updated: 2023/04/19 14:49:03 by gmattei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CTM_LIBS_H
# define CTM_LIBS_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(char *str);
void	*ft_bzero(void *s, unsigned int n);
void	*ft_calloc(unsigned int nmemb, unsigned int size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_strcsrc(char *str, char c);
int		ft_mtxcsrc(char **matrix, char c);
char	*ft_memchr(void *s, int c, unsigned int n);
int		ft_memcmp(void *s1, void *s2, unsigned int n);
void	*ft_memcpy(void *dest, void *src, unsigned int n);
void	*ft_memmove(void *dest, void *src, unsigned int n);
void	*ft_memset(void *s, int c, unsigned int n);
int		ft_strchr(char *s, int n);
char	*ft_strdup(char *s);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strrchr(char *s, int n);
char	*ft_strnstr(char *big, char *little, unsigned int len);
char	ft_tolower(char c);
char	ft_toupper(char c);
char	*ft_substr(char *s, unsigned int start, unsigned int len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strtrim(char *s1, char *set);
char	*ft_itoa(int n);
char	**ft_split(char *s, char c);
char	*ft_strmapi(char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
size_t	ft_strlcat(char *dest, char *src, unsigned int size);
size_t	ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_strcsrc(char *str, char c);
int	ft_mtxcsrc(char **matrix, char c);
/*LIBFT*/
char	*get_next_line(int fd);
size_t	ft_strleni(const char *s);
char	*ft_strjoin(char *s1, char *s2);
void	*my_malloc(int size);
char	*taglia(char *s);
char	*scrivi(int x, char *s);
void	*my_free(char *s);
char	*splitjoin(char *s1, char *s2, char *p);
char	*ft_leggi(int fd, int *i);
/*GET_NEXT_LINE*/
int	ft_print(const char *str, va_list args);
int	ft_printf(const char *str, ...);
int	ft_puthex_plus_count(unsigned long n, char uppercase);
int	ft_puthexp_plus_count(unsigned long n, int x);
int	ft_putnbr_plus_count(int n);
int	ft_putstr_plus_count(char *s);
int	ft_putunbr_plus_count(long int n);
/*PRINTF*/

#endif
