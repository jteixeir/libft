/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:12:37 by jteixeir          #+#    #+#             */
/*   Updated: 2020/02/21 15:37:31 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H
#include <string.h>
#include <stdlib.h>

int		ft_isalpha(int l);
int		ft_isalnum(int n);
int		ft_isascii(int a);
int		ft_isdigit(int d);
int		ft_isprint(int p);
int		ft_tolower(int lo);
int		ft_toupper(int up);
unsigned long	ft_strlen(const char *str);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *str, int c);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *s, int c, size_t n);
char		*ft_strdup(const char *s);
#endif
