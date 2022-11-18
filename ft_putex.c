/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:37:24 by azarda            #+#    #+#             */
/*   Updated: 2022/11/18 18:40:38 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putex(unsigned long int n)
{
	int		i;
	char	*hexa;

	i = 0;
	hexa = "0123456789abcdef";
	if (n >= 16)
		i += ft_putex(n / 16);
	i += ft_putchar(hexa[n % 16]);
	return (i);
}

int	ft_putexxa(unsigned long int n)
{
	int		i;
	char	*hexa;

	i = 0;
	hexa = "0123456789ABCDEF";
	if (n >= 16)
		i += ft_putexxa(n / 16);
	i += ft_putchar(hexa[n % 16]);
	return (i);
}

int	ft_putptr(unsigned long nbr)
{
	int	c;

	ft_putstr("0x");
	c = (ft_putex(nbr) + 2);
	return (c);
}
