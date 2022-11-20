/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:48:47 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/20 16:48:48 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_mapped;
	size_t	i;

	if (!s)
		return (NULL);
	s_mapped = ft_strdup(s);
	if (!s_mapped)
		return (NULL);
	i = 0;
	while (s_mapped[i])
	{
		s_mapped[i] = f(i, s[i]);
		i++;
	}
	return (s_mapped);
}
