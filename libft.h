/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:23:48 by jxie              #+#    #+#             */
/*   Updated: 2018/07/15 16:22:01 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include<string.h>
# include<ctype.h>
 
typedef struct	s_list
{
	void	*content;
	size_t	content_size;
	struct s_list	*next;
}		t_list;

//string.h library:21
//from here:
void ft_bzero(void *str, size_t n);
void *ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t len);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);

char *ft_strncpy(char *dest, const char *src, size_t len);
char *ft_strcpy(char *dest, const char *src);
char *ft_strdup(const char *str1);

size_t ft_strlen(const char *str);

char *ft_strcat(char *str1, const char *str2);
char *ft_strncat(char *str1, const char * str2, size_t n);
size_t ft_strlcat(char *dest, const char *src, size_t destsize);

char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);

char *ft_strstr(const char *haystack, const char *needle);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);

int ft_strcmp(const char *str1, const char *str2);
int ft_strncmp(const char *str1, const char * str2, size_t n);

int ft_atoi(const char *str);

//ctype.h 7
int	ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isspace(int c);

int ft_isascii(int c);
int ft_isprint(int c);

int ft_toupper(int c);
int ft_tolower(int c);
//stop here

//additional functions
void *ft_memalloc(size_t size);
void ft_memdel(void **ap);
char *ft_strnew(size_t size);
void ft_strdel(char **as);
void ft_strclr(char *s);

void ft_striter(char *s, void(*f)(char *));
void ft_striteri(char *s, void(*f)(unsigned int, char *));
char *ft_strmap(char const *s, char(*f)(char));
char *ft_strmapi(char const *s, char(*f)(unsigned int, char));

int ft_strequ(char const *s1, char const *s2);
int ft_strnequ(char const *s1, char const *s2, size_t n);

char *ft_strsub(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s);
char ** ft_strsplit(char const *s, char c);
char * ft_itoa(int n);
//below:
void ft_putchar(char c);
void ft_putchar_fd(char c, int fd);

void ft_putstr(char const *s);
void ft_putstr_fd(char const *s, int fd);

void ft_putendl(char const *s);
void ft_putendl_fd(char const *s, int fd);

void ft_putnbr(int n);
void ft_putnbr_fd(int n, int fd);
//done here
t_list *ft_lstnew(void const *content, size_t content_size);
void ft_lstdelone(t_list **alst, void(*del)(void*, size_t));
void ft_lstdel(t_list **alst, void(*del)(void *, size_t));
void ft_lstadd(t_list **alst, t_list *new);
void ft_lstiter(t_list *lst, void(*f)(t_list *elem));
t_list * ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void ft_lstfold();
int ft_isspace(int c);//done
#endif
