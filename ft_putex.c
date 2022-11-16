/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:37:24 by azarda            #+#    #+#             */
/*   Updated: 2022/11/16 10:01:08 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// put_nbr_base(123, 10, "0123456789abcdef")

// void put_nbr_base(long long n, int nbr_base, char *base)
// {
	
// }

void	ft_putex(unsigned int nb)
{
	if (nb > 9 && nb <= 15)
	{
		ft_putchar(nb + 'a' - 10);
	}	
    if (nb >= 0 && nb <= 9)
	{
        ft_putchar(nb + '0');
	}
	if (nb >= 16)
	{
		ft_putex(nb / 16);
		ft_putex(nb % 16);
	}
}
// int main ()
// {
//     ft_putex(17);
// 	printf("\n%x\n",17);
// }