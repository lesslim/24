/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 21:12:55 by rberon-s          #+#    #+#             */
/*   Updated: 2018/10/06 22:11:36 by rberon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	f(char *str, long long n, long long lx)
{
	int i;

	i = 0;
	if (ft_strcmp(str, rush00(lx, n / (lx + 1))) == 0 && i++ > -1)
    {
        printf("%d", i);
		print_rush00(i, lx, n / (lx + 1));
    }
	if (ft_strcmp(str, rush01(lx, n / (lx + 1))) == 0 && i++ > -1)
		print_rush01(i, lx, n / (lx + 1));
	if (ft_strcmp(str, rush02(lx, n / (lx + 1))) == 0 && i++ > -1)
		print_rush02(i, lx, n / (lx + 1));
	if (ft_strcmp(str, rush03(lx, n / (lx + 1))) == 0 && i++ > -1)
		print_rush03(i, lx, n / (lx + 1));
	if (ft_strcmp(str, rush04(lx, n / (lx + 1))) == 0 && i++ > -1)
		print_rush04(i, lx, n / (lx + 1));
	if (i == 0)
		ft_putstr("aucune");
}
