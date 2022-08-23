/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:34:02 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/20 15:40:36 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char_type(va_list parameters)
{
	char	to_print;

	to_print = (va_arg(parameters, int));
	ft_putchar_fd (to_print, 1);
	return (1);
}
