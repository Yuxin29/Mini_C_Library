/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:45:11 by yuwu              #+#    #+#             */
/*   Updated: 2025/05/10 18:29:02 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlower(unsigned int i)
{
	int		count;
	int		rest;
	char	*hex;

	hex = "0123456789abcdef";
	if (i == 0)
		return (ft_putstr("0"));
	count = 0;
	if (i >= 16)
	{
		rest = ft_puthexlower(i / 16);
		if (rest == -1)
			return (-1);
		count += rest;
	}
	if (ft_putchar(hex[i % 16]) == -1)
		return (-1);
	return (count + 1);
}
