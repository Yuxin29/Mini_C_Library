/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 12:02:39 by yuwu              #+#    #+#             */
/*   Updated: 2025/05/12 18:42:55 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// %p The void * pointer argument has to be printed in hexadecimal format
#include "ft_printf.h"

static int	ft_puthexlower_uintptr(uintptr_t i)
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

int	ft_putptr(void *ptr)
{
	uintptr_t	address;
	int			count;

	if (!ptr)
		return (ft_putstr("(nil)"));
	address = (uintptr_t)ptr;
	if (ft_putstr("0x") == -1)
		return (-1);
	count = ft_puthexlower_uintptr(address);
	if (count == -1)
		return (-1);
	return (2 + count);
}
