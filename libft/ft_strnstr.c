/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:25:59 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/16 16:26:00 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hlen;
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (!nlen)
		return ((char *)haystack);
	if (!len)
		return (NULL);
	hlen = ft_strlen(haystack);
	while (haystack && nlen <= len-- && nlen <= hlen--)
	{
		if (ft_strncmp(haystack++, needle, nlen) == 0)
			return ((char *)--haystack);
	}
	return (NULL);
}
