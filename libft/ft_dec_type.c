/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:34:55 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/20 15:42:42 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size(int n)
{
	int	count;
	int	num;

	num = n;
	count = 0;
	if (n <= 0)
		count = 1;
	while (num != 0)
	{
		count ++;
		num = num / 10;
	}
	return (count);
}

int	ft_dec_type(va_list parameters)
{
	int	to_print;
	int	count;

	to_print = (va_arg(parameters, int));
	count = ft_size(to_print);
	ft_putnbr_fd(to_print, 1);
	return (count);
}
