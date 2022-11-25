/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:30:20 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/18 15:30:21 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*sub_s;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen - 1)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	sub_s = malloc((len + 1) * sizeof(char));
	if (!sub_s)
		return (NULL);
	ft_memcpy(sub_s, s + start, len);
	sub_s[len] = 0;
	return (sub_s);
}
