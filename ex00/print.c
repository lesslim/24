/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 21:44:12 by rberon-s          #+#    #+#             */
/*   Updated: 2018/10/06 21:57:01 by rberon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	print_rush00(int i, long long x, long long y)
{
	if (i > 1)
		ft_putstr(" || ");
	ft_putstr("[rush-00] ");
	ft_putchar('[');
	ft_putnbr(x);
	ft_putstr("] ");
	ft_putchar('[');
	ft_putnbr(y);
	ft_putchar(']');
}

void	print_rush01(int i, long long x, long long y)
{
	if (i > 1)
		ft_putstr(" || ");
	ft_putstr("[rush-01] ");
	ft_putchar('[');
	ft_putnbr(x);
	ft_putstr("] ");
	ft_putchar('[');
	ft_putnbr(y);
	ft_putchar(']');
}

void	print_rush02(int i, long long x, long long y)
{
	if (i > 1)
		ft_putstr(" || ");
	ft_putstr("[rush-02] ");
	ft_putchar('[');
	ft_putnbr(x);
	ft_putstr("] ");
	ft_putchar('[');
	ft_putnbr(y);
	ft_putchar(']');
}

void	print_rush03(int i, long long x, long long y)
{
	if (i > 1)
		ft_putstr(" || ");
	ft_putstr("[rush-03] ");
	ft_putchar('[');
	ft_putnbr(x);
	ft_putstr("] ");
	ft_putchar('[');
	ft_putnbr(y);
	ft_putchar(']');
}

void	print_rush04(int i, long long x, long long y)
{
	if (i > 1)
		ft_putstr(" || ");
	ft_putstr("[rush-04] ");
	ft_putchar('[');
	ft_putnbr(x);
	ft_putstr("] ");
	ft_putchar('[');
	ft_putnbr(y);
	ft_putchar(']');
}
