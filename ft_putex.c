/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:37:24 by azarda            #+#    #+#             */
/*   Updated: 2022/11/16 23:51:56 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_calcul(unsigned long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		nb *= -1;
		len++;
	}
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
	char hexa[] = "0123456789abcdef";

	n = nb;
	if (n >= 16)
		ft_putex(n / 16);
	ft_putchar(hexa[n % 16]);
	return (ft_calcul(nb));

}

int ft_puteXa(unsigned long  nb)
{
	unsigned long	n;
	char hexa[] = "0123456789ABCDEF";

	n = nb;
	if (n >= 16)
		ft_puteXa(n / 16);
	ft_putchar(hexa[n % 16]);
	return (ft_calcul(nb));
}

int	ft_putptr(unsigned long nbr)
{
	int	ret;

	ft_putstr("0x");
	ret = ft_putex(nbr) + 2;
	return (ret);
}

// void	ft_putptr(unsigned long int p, int *f)
// {
// 	*f = 2;
// 	ft_putstr("0x");
// 	ft_putex(p, "0123456789abcdef", f);
// }

// int main ()
// {
//     ft_puteXa(-5);
// 	printf("\n%X\n",-5);
// }