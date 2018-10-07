/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:12:58 by rberon-s          #+#    #+#             */
/*   Updated: 2018/10/06 18:47:11 by rberon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*rush01(long long x, long long y)
{
	long long	s;
	long long	c;
	char		*str;

	s = 0;
	str = (char *)malloc(sizeof(char*) * (x + 1) * y);
	while (++s <= y)
	{
		c = 0;
		while (++c <= x)
		{
			if (s != y && s != 1 && c != x && c != 1)
				str[(s - 1) * (x + 1) + c - 1] = (' ');
			else if ((c + s) == 2 || (c + s) == (x + y))
				str[(s - 1) * (x + 1) + c - 1] = ('/');
			else if ((c == 1 && s == y) || (c == x && s == 1))
				str[(s - 1) * (x + 1) + c - 1] = ('\\');
			else
				str[(s - 1) * (x + 1) + c - 1] = ('*');
			if (c == x)
				str[(s - 1) * (x + 1) + c] = ('\n');
		}
	}
	return (str);
}
