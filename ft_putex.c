/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:37:24 by azarda            #+#    #+#             */
/*   Updated: 2022/11/18 14:49:55 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long	ft_calcul(long long int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

int	ft_putex(unsigned long nb)
{
	unsigned long	n;
	char			*hexa;

	hexa = "0123456789abcdef";
	n = nb;
	if (n >= 16)
		ft_putex(n / 16);
	ft_putchar(hexa[n % 16]);
	return (ft_calcul(nb));
}

int	ft_putexxa(unsigned long nb)
{
	unsigned long	n;
	char			*hexa;

	hexa = "0123456789ABCDEF";
	n = nb;
	if (n >= 16)
		ft_putexxa(n / 16);
	ft_putchar(hexa[n % 16]);
	return (ft_calcul(nb));
}

long	ft_putptr(long nbr)
{
	long	c;

	c = 0;
	if (nbr < 0)
		c -= 1;
	ft_putstr("0x");
	c = (ft_putex(nbr) + 2);
	return (c);
}
