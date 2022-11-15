/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:09:58 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/15 18:09:59 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	cc;
	size_t	i;

	str = (char *)s;
	cc = c;
	i = 0;
	while (str[i] && str[i] != cc)
		i++;
	if (str[i] == cc || cc == '\0')
		return (str + i);
	return (NULL);
}
