/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:46:02 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/29 13:46:03 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr_chr(unsigned long long ptr)
{
	char	*hex;
	int		len_ptr;

	hex = "0123456789abcdef";
	len_ptr = 0;
	if (ptr > 15)
		len_ptr += ft_putptr_chr(ptr / 16);
	len_ptr += ft_putchar(hex[ptr % 16]);

	return (len_ptr);
}

int	ft_putptr(unsigned long long ptr)
{
	int		len;

	len = 0;
	len += write(1, "0x", 2);
	len += ft_putptr_chr(ptr);

	return (len);
}
