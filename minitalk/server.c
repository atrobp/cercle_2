/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atopalli <atopalli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:27:51 by atopalli          #+#    #+#             */
/*   Updated: 2022/09/30 13:28:43 by atopalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ftprintf(char *text, int pid);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	sig_handler(int signum)
{
	static int	ascii = 0;

	if (signum == SIGUSR1)
		ascii += 1;
	else
	{
		ft_putchar(ascii);
		ascii = 0;
	}
}

int	main(void)
{
	if (getpid())
	{
		ftprintf("Process ID: ", getpid());
		signal(SIGUSR1, sig_handler);
		signal(SIGUSR2, sig_handler);
		while (1)
			pause();
	}
	return (0);
}

void	ftprintf(char *text, int pid)
{
	static char	base[10] = "0123456789";
	char		*str;

	str = (char *)malloc(10);
	str[9] = '\0';
	while (*text)
		write(1, &*text++, 1);
	while (pid)
	{
		*--str = base[pid % 10];
		pid /= 10;
	}
	while (*str)
		ft_putchar(*str++);
	free(str);
	write(1, "\n", 1);
}
