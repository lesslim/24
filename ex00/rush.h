/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:32:51 by rberon-s          #+#    #+#             */
/*   Updated: 2018/10/06 15:34:51 by rberon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

char    *rush00(long long x, long long y);
char    *rush01(long long x, long long y);
char    *rush02(long long x, long long y);
char    *rush03(long long x, long long y);
char    *rush04(long long x, long long y);
void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putnbr(int nb);
int     ft_strcmp(char *s1, char *s2);
void    *ft_memcpy(void *dst, const void *src, unsigned int size);
char    *ft_realloc(char *ptr, unsigned int size);
void    f(char *str, long long n, long long lx);
void    print_rush00(int i, long long x, long long y);
void    print_rush01(int i, long long x, long long y);
void    print_rush02(int i, long long x, long long y);
void    print_rush03(int i, long long x, long long y);
void    print_rush04(int i, long long x, long long y);

long long n;

#endif
