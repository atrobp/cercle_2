/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atopalli <atopalli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:36:45 by atopalli          #+#    #+#             */
/*   Updated: 2022/08/14 18:43:09 by atopalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int	ftatoi(const char *str);

int	main(int argc, char const *argv[])
{
	static int	i = -1;

	if (argc > 3)
		write(1, "too much args", 13);
	else if (argc < 3)
		write(1, "not enough args", 15);
	else
	{
		while (argv[1][++i])
		{
			if (argv[1][i] < '0' || argv[1][i] > '9')
			{
				printf("check pid");
				return (0);
			}
		}
		kill(ftatoi(argv[1]), SIGUSR1);
	}
	return (0);
}

int	ftatoi(const char *str)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while (str[i])
	{
		num = num * 10 + (str[i] - 48);
		i += 1;
	}
	return (num);
}
