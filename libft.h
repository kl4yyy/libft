/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:50:30 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/11 17:06:56 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

size_t  ft_strlen(const char *s);
int ft_isprint(int c);
int ft_isdigit(int c);
void    *ft_memset(void *s, int c, size_t n);
int ft_toupper(int c);
int ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char    *strrchr(const char *s, int c);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
int ft_atoi(const char *nptr);
char    *ft_strdup(const char *s);
void    ft_bzero(void *s, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isalpha(int c);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char **ft_split(char const *s, char c);
void	*ft_calloc(size_t nmemb, size_t size);


#endif
