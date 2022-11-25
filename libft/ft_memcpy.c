/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:55:23 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/15 12:55:24 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*to;
	unsigned const char	*from;

	if (!dst && !src)
		return (NULL);
	to = dst;
	from = src;
	while (n--)
		*to++ = *from++;
	return (dst);
}
