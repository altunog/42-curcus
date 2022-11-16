/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:30:32 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/16 18:30:33 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	num;
	int		minus;

	num = 0;
	minus = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{	
		minus = -1;
		str++;
	}
	while (ft_isdigit(*str))
		num = num * 10 + *str++ - '0';
	return ((int)num * minus);
}
