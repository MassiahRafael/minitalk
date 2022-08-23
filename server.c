/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:15:02 by rmassiah          #+#    #+#             */
/*   Updated: 2022/08/23 12:31:15 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sighandle(int signal)
{
	static int	bit;
	static int	i;

	if (signal == SIGUSR1)
		i = i | (1 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		i = 0;
		bit = 0;
	}
}

int	main(int argc, char *argv[])
{
	int	pid;

	pid = getpid();
	if (argc == 1)
	{
		ft_printf("Bem vindo ao meu server com PID = %d\n", pid);
		while (argc == 1)
		{
			signal(SIGUSR1, ft_sighandle);
			signal(SIGUSR2, ft_sighandle);
			pause();
		}
	}
	else
	{
		ft_printf("Wrong input! Try: ./server");
	}
	return (0);
}
