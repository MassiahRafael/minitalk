/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:46:05 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/20 16:19:45 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_str_type(va_list parameters)
{
	char	*s;
	int		i;

	s = (va_arg(parameters, char *));
	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		i = 6;
		return (i);
	}
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
