/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:04:18 by azarda            #+#    #+#             */
/*   Updated: 2022/11/16 11:54:57 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	check_format(const char *format, va_list pt, int i)
{
	int	ret;

	ret = 0;
	if (format[i] == '%' && format[i + 1] == 'c')
		ret = ft_putchar(va_arg(pt, char));
	else if (format[i] == '%' && format[i + 1] == 's')
		ret = ft_putstr(va_arg(pt, char));
	else if (format[i] == '%' && format[i + 1] == 'p')
		ret = ft_putptr(va_arg(pt, char));
	
	return (ret);
}

int print_format(const char *format, va_list pt)
{
	int	i;
	int	j;

	j = 0;
	while (*format)
	{
		i = check_format(*format, *(format + 1), pt);
		if (i == -1)
			return (j);
		j += i;
		if (*format == '%')
			format++;
		format++;
	}
	return (j);
}

int ft_printf(const char *format, ...)
{
	va_list pt;
	int k = 0;

	va_start(pt, format);
	k = print_format(format, pt);
	va_end(pt);
	return (k);
}
// int main()
// {
// 	ft_printf("%c", "d");
// }
