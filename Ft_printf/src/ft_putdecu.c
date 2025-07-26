/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:43:47 by yuwu              #+#    #+#             */
/*   Updated: 2025/05/09 11:44:59 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdecu(unsigned int i)
{
	int	count;
	int	rest;

	count = 0;
	if (i >= 10)
	{
		rest = ft_putdec(i / 10);
		if (rest == -1)
			return (-1);
		count += rest;
	}
	if (ft_putchar((i % 10) + '0') == -1)
		return (-1);
	return (count + 1);
}
