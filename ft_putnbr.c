/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:17:38 by azarda            #+#    #+#             */
/*   Updated: 2022/11/18 18:36:50 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i += ft_putchar('-');
		i += ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		i += ft_putchar('-');
		n = n * -1;
	}
	if (n <= 9)
		i = i + ft_putchar(n + '0');
	if (n >= 10)
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	return (i);
}

int	ft_putnbru(unsigned int nbr)
{
	unsigned int	rest;
	int				i;

	i = 0;
	rest = nbr % 10 + '0';
	nbr /= 10;
	if (nbr != 0)
		i += ft_putnbru(nbr);
	i += ft_putchar(rest);
	return (i);
}
