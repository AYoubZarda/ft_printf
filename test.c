/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:50:54 by azarda            #+#    #+#             */
/*   Updated: 2022/11/14 23:00:48 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
 
int print_format(const char *format, va_list ptr)
{
	int	i;

	i = 0;
	while (format[i])
	
}

int ft_printf(const char *format, ...)
{
	va_list ptr;
	int     k;

	va_start(ptr, format);
	k = print_format(format, ptr);
}