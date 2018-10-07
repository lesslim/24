/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:24:51 by rberon-s          #+#    #+#             */
/*   Updated: 2018/10/06 23:01:31 by rberon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		main(void)
{
	long long	n;
	long long	lx;
	char		c;
	char		*str;
	long long	b;

	n = 0;
	lx = -2;
	b = 8;
	str = (char *)malloc(sizeof(char));
	while (read(0, &c, 1))
	{
		str[n++] = c;
		if (n >= b)
		{
			b *= 2;
			str = ft_realloc(str, b);
		}
		if (c == '\n' && lx == -2)
			lx = n - 1;
	}
    f(str, n, lx);
	return (0);
}
