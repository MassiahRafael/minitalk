/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scan_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:45:25 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/20 16:33:12 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_scan_type(char c, va_list parameters)
{
	int	total;

	total = 0;
	if (c == 'c')
		total = ft_char_type(parameters);
	if (c == 's')
		total = ft_str_type(parameters);
	if (c == 'd')
		total = ft_dec_type(parameters);
	if (c == 'i')
		total = ft_int_type(parameters);
	if (c == 'u')
		total = ft_unsignint_type(parameters);
	if (c == 'p')
		total = ft_pointer_type(parameters);
	if (c == 'x')
		total = ft_low_hexa_type(parameters);
	if (c == 'X')
		total = ft_up_hexa_type(parameters);
	if (c == '%')
		total = ft_percent_type();
	return (total);
}
