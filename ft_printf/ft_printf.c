/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:23:59 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/28 16:23:59 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"
int ft_printf(const char *format, ...)
{
	va_list args;
	int total_len;

	total_len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (*++format == 'c')
				total_len += ft_putchar(va_arg(args, int));
			else if (*format == 's')
				total_len += ft_putstr(va_arg(args, const char *));
			else if (*format == 'p')
				total_len += ft_putptr(va_arg(args, unsigned long long));
			else
			{
				total_len += ft_putchar(*--format);
			}
		}
		else
			total_len += ft_putchar(*format);

		format++;
	}

	va_end(args);
	return (total_len);
}

int main()
{
	int a = 5;

	ft_printf("putchar\t: hell%c w%crld\n", 'o', 'o');
	ft_printf("putstr\t: hell%c %s\n", 'o', "world");
	ft_printf("putptr\t: a =  %p\n", &a);
}