/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:06:31 by rberon-s          #+#    #+#             */
/*   Updated: 2018/10/06 18:43:01 by rberon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*rush00(long long x, long long y)
{
	long long	s;
	long long	c;
	char		*str;

	s = 0;
	str = (char *)malloc(sizeof(char) * (x + 1) * y);
	while (++s <= y)
	{
		c = 0;
		while (++c <= x)
		{
			if (s != y && s != 1 && c != x && c != 1)
				str[s * (x + 1) + c] = (' ');
			else if ((c == 1 && s > 1 && s < y) || (c == x && s > 1 && s < y))
				str[s * (x + 1) + c] = ('|');
			else if ((s == 1 && c > 1 && c < x) || (s == y && c > 1 && c < x))
				str[s * (x + 1) + c] = ('-');
			else
				str[s * (x + 1) + c] = ('o');
			if (c == x)
				str[s * (x + 1) + c + 1] = ('\n');
		}
	}
	return (str);
}
