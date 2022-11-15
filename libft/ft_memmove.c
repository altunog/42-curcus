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

	to = dst;
	from = src;
	if (to == from || len == 0)
		return (dst);
	if (to > from && (to - from) < (long)len)
		while (len--)
			*(to + len) = *(from + len);
	else if (from > to && (from - to) < (long)len)
		while (len--)
			*to++ = *from++;
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
