/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:42:17 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/16 13:42:18 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	comparison;

	comparison = 0;
	while (n-- && *s1 && *s2)
	{
		if (*s1 != *s2)
		{
			comparison = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
	}
	return (comparison);
}
