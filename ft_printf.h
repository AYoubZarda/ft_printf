/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:00:14 by azarda            #+#    #+#             */
/*   Updated: 2022/11/18 12:45:25 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putnbr(int nbr);
int		ft_putnbru(unsigned int nbr);
int		ft_strlen(const char *s);
int		ft_putstr(char *s);
int		ft_putex(unsigned long nb);
int		ft_putexxa(unsigned long nb);
long		ft_putptr(   unsigned long nbr);

#endif 