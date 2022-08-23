/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_up_hexa_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 09:02:06 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/20 16:30:45 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size(unsigned int n)
{
	int					count;
	unsigned int		num;

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

static void	ft_puthexa(unsigned int n)
{
	char	c;

	if (n >= 16)
	{
		ft_puthexa(n / 16);
	}
	c = BASEUP[n % 16];
	write(1, &c, 1);
}

int	ft_up_hexa_type(va_list parameters)
{
	int				count;
	unsigned int	to_print;

	count = 0;
	to_print = (va_arg(parameters, unsigned int));
	count = count + ft_size(to_print);
	if (to_print == 0)
		write(1, "0", 1);
	else
		ft_puthexa(to_print);
	return (count);
}
