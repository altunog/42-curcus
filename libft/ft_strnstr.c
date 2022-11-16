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
	size_t	haystacklen;
	size_t	needlelen;

	if (!*needle)
		return ((char *)haystack);
	haystacklen = ft_strlen(haystack);
	needlelen = ft_strlen(needle);
	while (needlelen <= len-- && needlelen <= haystacklen--)
	{
		if (ft_strncmp(haystack++, needle, needlelen) == 0)
			return ((char *)--haystack);
	}
	return (NULL);
}
