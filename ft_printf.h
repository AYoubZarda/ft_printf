/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:00:14 by azarda            #+#    #+#             */
/*   Updated: 2022/11/16 10:43:16 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

int ft_printf(const char *format, ...);
int ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_strlen(const char *s);
char	ft_putstr(char *s);
void	ft_putex(unsigned int nb, char *ba, int *f);

#endif