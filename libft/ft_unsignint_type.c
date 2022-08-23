/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignint_type.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:46:44 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/20 16:23:27 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size(unsigned int n)
{
	int				count;
	unsigned int	num;

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

static void	ft_putunsignint(unsigned int n)
{
	if (n > 9)
	{
		ft_putunsignint(n / 10);
	}
	n = n % 10;
	n = n + 48;
	write(1, &n, 1);
}

int	ft_unsignint_type(va_list parameters)
{
	unsigned int	to_print;
	int				count;

	to_print = (va_arg(parameters, unsigned int));
	count = ft_size(to_print);
	ft_putunsignint(to_print);
	return (count);
}
