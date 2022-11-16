/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:20:40 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/16 14:20:41 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	unsigned char	cc;

	str = (char *)s;
	cc = c;
	while (n-- && *str)
	{
		if (*str == cc)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
