/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:47:24 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/29 12:47:25 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	unsigned char	*ch_ptr;
	unsigned char	ch;
	int				len;

	ch_ptr = (unsigned char *)malloc(sizeof(char));
	if (!ch_ptr)
		return (0);
	ch = (unsigned char)c;
	*ch_ptr = ch;
	len = write(1, ch_ptr, 1);
	free(ch_ptr);
	return (len);
}
