/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:29:32 by azarda            #+#    #+#             */
/*   Updated: 2022/11/15 22:02:37 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	i;
	// if (!s)
	// return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


char	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		write(1, &s[i++], 1);
    return (ft_strlen(s));
}
// int main()
// {
// 	int i = ft_putstr(NULL);
// 	printf("%d\n", i);
// }