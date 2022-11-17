/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:37:24 by azarda            #+#    #+#             */
/*   Updated: 2022/11/17 20:31:05 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_calcul(long long int nb)
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
	long	n;
	char	*hexa;

	hexa = "0123456789abcdef";
	n = nb;
	if (n >= 16)
		ft_putex(n / 16);
	ft_putchar(hexa[n % 16]);
	return (ft_calcul(nb));
}

int	ft_putexxa(unsigned long nb)
{
	long	n;
	char	*hexa;

	hexa = "0123456789ABCDEF";
	n = nb;
	if (n >= 16)
		ft_putexxa(n / 16);
	ft_putchar(hexa[n % 16]);
	return (ft_calcul(nb));
}

int	ft_putptr(unsigned long nbr)
{
	long int	ret;

	ft_putstr("0x");
	ret = ft_putex(nbr) + 2;
	return (ret);
}

// int main ()
// {
//     ft_puteXa(-5);
// 	printf("\n%X\n",-5);
// }