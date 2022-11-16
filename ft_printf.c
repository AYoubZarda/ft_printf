/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:04:18 by azarda            #+#    #+#             */
/*   Updated: 2022/11/17 00:38:32 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include <signal.h>

int check_format(const char *format, va_list pt, int i, int ret)
{
	while (format[i])
	{
		if (format[i - 1] == '%' && format[i] == 'c')
		ret += ft_putchar(va_arg(pt, int));
		else if (format[i - 1] == '%' && format[i] == 's')
			ret += ft_putstr(va_arg(pt, char *));
		else if (format[i - 1] == '%' && format[i] == 'x')
			ret += ft_putex(va_arg(pt, unsigned long));
		else if (format[i - 1] == '%' && format[i] == 'X')
			ret += ft_puteXa(va_arg(pt, unsigned long));
		else if (format[i - 1] == '%' && format[i] == 'p')
			ret += ft_putptr(va_arg(pt, unsigned long int));
		else if (format[i - 1] == '%' && format[i] == 'd')
			ret += ft_putnbr(va_arg(pt, int));
		else if (format[i - 1] == '%' && format[i] == 'i')
			ret += ft_putnbr(va_arg(pt, int));
		else if(format[i] == '%' && format[i + 1] == '%')
			ret += ft_putchar('%');
		else if(format[i] != '%')
			ret += ft_putchar(format[i]);
		i++;
	}
	return (ret);
}

int ft_printf(const char *format, ...)
{
	va_list pt;
	int ret;
	int x;
	int i;
	
	i = 0;
	x = 0;
	ret = 0;
	va_start(pt, format);
	ret = check_format(format, pt, i, x);
	va_end(pt);
	return (ret);
}

int main()
{
	int	i;
	int j;
	// i = ft_printf("xxxxx xxxx xx%cxxx xxxx %d xxxxx xxxx xxxx %x xxxx xxxxx x%cxxxxxxxxxx xxxxxxx xxxx %p x%cxxxxxxxxx xxxxx %i\n", '\'', 24, 123456789, '\'', &i, '\'', 20);
	// j = printf("xxxxx xxxx xx%cxxx xxxx %d xxxxx xxxx xxxx %x xxxx xxxxx x%cxxxxxxxxxx xxxxxxx xxxx %p x%cxxxxxxxxx xxxxx %i\n", '\'', 24, 123456789, '\'', &i, '\'', 20);
	i = printf("%u\n", -6);
	printf("i = %d     j = %d", i, j);
}
