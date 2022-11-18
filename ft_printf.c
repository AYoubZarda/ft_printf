/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:04:18 by azarda            #+#    #+#             */
/*   Updated: 2022/11/18 18:12:33 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(char format, va_list count)
{
	int	n;

	n = 0;
	if (format == 'c')
		n += ft_putchar(va_arg(count, int));
	else if (format == 's')
		n += ft_putstr(va_arg(count, char *));
	else if (format == 'd' || format == 'i')
		n += ft_putnbr(va_arg(count, int));
	else if (format == 'u')
		n += ft_putnbru(va_arg(count, unsigned int));
	else if (format == 'x')
		n += ft_putex(va_arg(count, unsigned int));
	else if (format == 'X')
		n += ft_putexxa(va_arg(count, unsigned int));
	else if (format == 'p')
		n += ft_putptr(va_arg(count, unsigned long));
	else if (format == '%')
		n += ft_putchar('%');
	return (n);
}

int	ft_printf(const char *s, ...)
{
	int		len;
	va_list	ptr;

	len = 0;
	va_start(ptr, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == 'c' || *s == 's' || *s == 'p' \
					|| *s == 'd' || *s == 'i' || *s == 'u' \
						|| *s == 'x' || *s == 'X' || *s == '%')
			{
				len += check_format(*s, ptr);
			}
			else
				len += ft_putchar(*s);
		}
		else if (*s != '%')
			len += ft_putchar(*s);
		s++;
	}
	va_end(ptr);
	return (len);
}
// int main()
// {
// 	int f ;
// 	int i = 0;
// 	int j = 0;
// 	j = ft_printf("%p\n", ULONG_MAX);
// 	i = printf("%p\n", ULONG_MAX);
// 	printf("i = %d     j = %d", i, j);
// 	// i = ft_putptr(ULONG_MAX);
// 	// printf("%d", i);
// }