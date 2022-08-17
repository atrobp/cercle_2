/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atopalli <atopalli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:09:57 by atopalli          #+#    #+#             */
/*   Updated: 2022/08/15 14:47:26 by atopalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char const *argv[])
{
	minignl(open(argv[1], O_RDONLY));
	return (0);
}

char	*minignl(int fd)
{
	static char	*last;
	char		*temp;

	temp = (char *)malloc(2);
	if (temp)
	{
		while (read(fd, temp, 1))
		{
			if (!read(fd, temp, 1))
				break ;
		}
		free(temp);
	}
	return (NULL);
}
