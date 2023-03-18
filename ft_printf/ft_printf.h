/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:48:49 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/28 12:48:50 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putstr(const char *s);
int	ft_putptr(unsigned long long ptr);
int	ft_putnbr_d(int n);
int	ft_putnbr_i(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_putnbr_x(int n);
int	ft_printf(const char *format, ...);
int	ft_specify(char *str, char specifier);

#endif
