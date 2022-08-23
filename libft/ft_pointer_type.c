/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:38:41 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/20 16:33:56 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size(unsigned long long n)
{
	int					count;
	unsigned long long	num;

	num = n;
	count = 0;
	if (num == 0)
		count = 1;
	while (num != 0)
	{
		count ++;
		num = num / 16;
	}
	return (count);
}

static void	ft_putpointer(unsigned long long n)
{
	char	c;

	if (n >= 16)
	{
		ft_putpointer(n / 16);
	}
	c = BASELOW[n % 16];
	write(1, &c, 1);
}

int	ft_pointer_type(va_list parameters)
{
	int					count;
	unsigned long long	to_print;

	to_print = (va_arg(parameters, unsigned long long));
	count = 2;
	count = count + ft_size(to_print);
	write (1, "0x", 2);
	if (to_print == 0)
		write(1, "0", 1);
	else
		ft_putpointer(to_print);
	return (count);
}
