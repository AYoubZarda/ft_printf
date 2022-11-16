/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:17:38 by azarda            #+#    #+#             */
/*   Updated: 2022/11/16 20:04:12 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static int ft_calcul(int nb)
{
	int	c;
	
	c = 0;
	if (nb < 0)
	{
		c++;
		nb *= -1;
	}
	if (nb == 0)
		c++;
	while (nb > 0)
	{
		nb = nb / 10;
		c++;
	}
	return (c);
}

int	ft_putnbr(int nbr)
{
	int			rest;
	long int	n;

	n = (long int)nbr;
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	rest = n % 10 + '0';
	n /= 10;
	if (n != 0)
		ft_putnbr(n);
	ft_putchar(rest);
	return (ft_calcul(nbr));
}
