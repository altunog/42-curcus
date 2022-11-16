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
	char	*str;
	char	cc;
	size_t	ri;

	str = (char *)s;
	cc = c;
	ri = ft_strlen(s) - 1;
	while (ri && str[ri] != cc)
		ri--;
	if (str[ri] == cc || cc == '\0')
		return (str + ri);
	return (NULL);
}
