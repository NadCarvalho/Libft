/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:10:30 by ncarolin          #+#    #+#             */
/*   Updated: 2022/07/11 01:02:38 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int ft_isalpha(int str);
int ft_isdigit(int num);
int ft_isalnum(int input);
int ft_isascii(int input);
int ft_isprint(int input);
int	ft_strlen(const char *str);
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize); 
size_t ft_strlcat(char *dst, const char *src, size_t size); 
char *ft_strnstr(const char *big, const char *little, size_t len);
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *src);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void(*f)(unsigned int, char *));
void ft_putchar_fd(char c, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putstr_fd(char *s, int fd);
void *ft_memmove(void *dst, const void *src, size_t n);
int ft_atoi(const char *nptr);
char *ft_itoa(int n);
// static int ft_isspace(int c); 
// static void get_nbr_str(char *str, int n, size_t size);
#endif
