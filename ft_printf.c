/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:04:18 by azarda            #+#    #+#             */
/*   Updated: 2022/11/15 15:11:01 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

// int print_format(const char *format, va_list ptr)
// {
// 	int i;

// 	i = 0;
// 	while (format[i])
// }

// int ft_printf(const char *format, ...)
// {
// 	va_list ptr;
// 	int k;

// 	va_start(ptr, format);
// 	k = print_format(format, ptr);
// }
int main ()
{
	int i = printf ("m");
	puts("\n");
	printf ("%d", i);
}