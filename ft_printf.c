/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:04:18 by azarda            #+#    #+#             */
/*   Updated: 2022/11/16 14:19:50 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	check_format(const char *format, va_list pt)
{
	int	ret;
	int	i;

	ret = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == 'c')
			ret += ft_putchar(va_arg(pt, int));
		else if (format[i] == '%' && format[i + 1] == 's')
			ret += ft_putstr(va_arg(pt, char *));
		 else if (format[i] == '%' && format[i + 1] == 'p')
		 	ft_putptr(va_arg(pt, unsigned long int), &ret);
		// {
		// ft_putstr("0x");
		// ft_putex(format[i], "0123456789abcdef", &ret);
		// }
		i++;
	}
	
	
	return (ret);
}

// int print_format(const char *format, va_list pt)
// {
// 	int	i;
// 	int	ret;
// 	int	j;

// 	j = 0;
// 	// while (format[i])
// 	// {
// 		ret = check_format(format, pt);
// 	// 	if (i == -1)
// 	// 		return (j);
// 	// 	j += i;
// 	// 	if (*format == '%')
// 	// 		format++;
// 	// 	format++;
// 	// }
// 	return (j);
// }

int ft_printf(const char *format, ...)
{
	va_list pt;
	int k = 0;

	va_start(pt, format);
	k = check_format(format, pt);
	va_end(pt);
	return (k);
}
int main()
{
	int	i = 0;
	ft_printf("%p", &i);
	printf("\n%p", &i);
}
