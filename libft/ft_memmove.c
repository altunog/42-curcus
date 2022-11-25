/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:50:48 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/15 13:50:49 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*to;
	const char	*from;

	if (!dst && !src)
		return (NULL);
	to = dst;
	from = src;
	if (to == from || len == 0)
		return (dst);
	if (from < to)
		while (len--)
			*(to + len) = *(from + len);
	else if (from > to)
		while (len--)
			*to++ = *from++;
	return (dst);
}
