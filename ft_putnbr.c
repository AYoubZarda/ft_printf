/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:17:38 by azarda            #+#    #+#             */
/*   Updated: 2022/11/15 15:57:58 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


// int ft_calcul(int nb)
// {
// 	int	c;
	
// 	c = 0;
// 	if (nb < 0)
// 	{
// 		c++;
// 		nb *= -1;
// 	}
// 	if (nb == 0)
// 		c++;
// 	while (nb > 0)
// 	{
// 		nb = nb / 10;
// 		c++;
// 	}
// 	return (c);
// }

int	ft_putnbr(int n)
{
	int c;
	c = 0;
	if (n == -2147483648)
	{
		c = c + ft_putchar('-');
		c = c + ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		c = c + ft_putchar('-');
		n = n * -1;
	}
	if (n >= 0 && n <= 9)
	{
		c = c + ft_putchar(n + '0');
	}
	if (n >= 10)
	{
		c = c + ft_putnbr(n / 10);
		c = c + ft_putnbr(n % 10);
	}
	if (n == 0)
		return (1);
	return (c);
}
