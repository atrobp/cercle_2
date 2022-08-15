/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atopalli <atopalli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:27:51 by atopalli          #+#    #+#             */
/*   Updated: 2022/08/14 18:42:31 by atopalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <signal.h>

void	ftprintf(char *text, int pid);

void	sig_handler(int signum)
{
	printf("hello world\n");
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ftprintf("Process ID: ", pid);
	signal(SIGUSR1, sig_handler);
	while (1)
		;
}

void	ftprintf(char *text, int pid)
{
	static char	base[10] = "0123456789";
	char		*str;
	char		buf[10];

	str = &buf[9];
	*str = '\0';
	while (*text)
		write(1, &*text++, 1);
	while (pid)
	{
		*--str = base[pid % 10];
		pid /= 10;
	}
	while (*str)
		write(1, &*str++, 1);
	write(1, "\n", 2);
}
