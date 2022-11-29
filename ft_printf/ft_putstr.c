/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:28:00 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/29 13:28:01 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int		len;

	if (!s)
		return (0);
	len = 0;
	while (*s)
	{
		len += ft_putchar(*s);
		s++;
	}
	return (len);
}
