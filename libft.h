/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:50:30 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/05 16:40:58 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *c);
int	ft_isprint(int c);
int	ft_isdigit(int c);
void *ft_memset(void *s, int c, size_t n);
int toupper(int c);
int tolower(int c);
char *strchr(const char *s, int c);

#endif
