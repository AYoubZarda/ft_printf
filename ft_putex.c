/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:37:24 by azarda            #+#    #+#             */
/*   Updated: 2022/11/16 14:18:41 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putex(unsigned int nb, char *ba, int *f)
{
	
	// if (nb > 9 && nb <= 15)
	// {
	// 	ft_putchar(nb + 'a' - 10);
	// }	
    // if (nb >= 0 && nb <= 9)
	// {
    //     ft_putchar(nb + '0');
	// }
	if (nb >= 16)
	{
		ft_putex(nb / 16, ba, f);
		ft_putex(nb % 16, ba, f);	
	}
	else
	{
		
		write(1, &ba[nb], 1);
		f++;
	}
}
void	ft_putptr(unsigned long int p, int *f)
{
	*f = 2;
	ft_putstr("0x");
	ft_putex(p, "0123456789abcdef", f);
}

// int main ()
// {
//     ft_putex(-5, "0123456789ABCDEF", 0);
// 	printf("\n%X\n",-5);
// }