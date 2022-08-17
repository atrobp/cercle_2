/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atopalli <atopalli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:36:45 by atopalli          #+#    #+#             */
/*   Updated: 2022/08/16 20:44:25 by atopalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ftatoi(const char *str);

void	char2bin(char ascii, int pid)
{
	int	i;

	i = 0;
	while (i <= ascii)
	{
		printf("%d\n", i);
		kill(pid, SIGUSR1);
		usleep(10000);
		i += 1;
	}
	kill(pid, SIGUSR2);

}

int	main(int argc, char const *argv[])
{
	static int	i = -1;
	int			pid;

	if (argc > 3)
		write(1, "too much args", 13);
	else if (argc < 3)
		write(1, "not enough args", 15);
	else
	{
		pid = ftatoi(argv[1]);
		while (argv[1][++i])
		{
			if (argv[1][i] < '0' || argv[1][i] > '9')
			{
				printf("check pid");
				return (0);
			}
		}
		// printf("%d", kill(pid, SIGUSR1));
		while (*argv[2])
			char2bin(*argv[2]++, pid);
	}
	return (0);
}

int	ftatoi(const char *str)
{
	int	num;

	num = 0;
	while (*str)
	{
		num = num * 10 + (*str - 48);
		str += 1;
	}
	return (num);
}
