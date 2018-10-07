/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:14:18 by rberon-s          #+#    #+#             */
/*   Updated: 2018/10/07 11:20:02 by rberon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*rush02(long long x, long long y)
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
				str[s * (x + 1) + c] = (' ');
			else if ((c == 1 && s == 1) || (c == x && s == 1))
				str[s * (x + 1) + c] = ('A');
			else if ((c == 1 && s == y) || (c == x && s == y))
				str[s * (x + 1) + c] = ('C');
			else
				str[s * (x + 1) + c] = ('B');
			if (c == x)
				str[s * (x + 1) + c + 1] = ('\n');
		}
	}
	return (str);
}
