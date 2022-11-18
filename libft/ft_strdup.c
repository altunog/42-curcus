/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:40:20 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/18 11:40:21 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*copied;
	
	len = ft_strlen(s1) + 1;
	copied = malloc(len * sizeof(char));
	if (!copied)
		return (NULL);
	ft_memcpy(copied, s1, len);
	return (copied);
}
