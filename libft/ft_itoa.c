/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:38:00 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/20 14:38:01 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digitlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	lnum;
	int		ndigits;
	int		i;
	char	*str;

	lnum = n;
	ndigits = ft_digitlen(n);
	str = malloc((ndigits + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[ndigits] = 0;
	i = 0;
	if (lnum < 0)
	{
		lnum *= -1;
		str[i++] = '-';
	}
	while (--ndigits >= i)
	{
		str[ndigits] = lnum % 10 + '0';
		lnum /= 10;
	}
	return (str);
}
