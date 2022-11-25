/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:06:00 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/16 13:06:02 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	size_t	len;

	ch = c;
	len = ft_strlen(s);
	while (len && s[len] != ch)
		len--;
	if (s[len] == ch)
		return ((char *)(s + len));
	return (NULL);
}
