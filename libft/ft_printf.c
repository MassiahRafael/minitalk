/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:26:33 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/20 20:08:30 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_valid_type(char c)
{
	return (c == 'c'
		|| c == 's'
		|| c == 'p'
		|| c == 'd'
		|| c == 'i'
		|| c == 'u'
		|| c == 'x'
		|| c == 'X'
		|| c == '%');
}

int	ft_printf(const char *str, ...)
{
	va_list	parameters;
	int		total;
	size_t	i;

	va_start(parameters, str);
	i = 0;
	total = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (ft_valid_type(str[i]))
				total = total + (ft_scan_type(str[i], parameters));
		}
		else if (str [i])
		{
			total++;
			ft_putchar_fd (str[i], 1);
		}
		i++;
	}
	va_end(parameters);
	return (total);
}
