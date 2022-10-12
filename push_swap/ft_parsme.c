/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsme.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atopalli <atopalli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:43:16 by atopalli          #+#    #+#             */
/*   Updated: 2022/10/09 09:21:09 by atopalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

long	ft_atol(char *str)
{
	int	num;
	int	isneg;

	isneg = 1;
	num = 0;
	if (*str == '-')
	{
		str += 1;
		isneg = -1;
	}
	while (*str)
	{
		num = num * 10 + (*str - '0');
		str += 1;
	}
	return (num * isneg);
}

int	ft_strlen(char *str, char tofind)
{
	int	i;
	int	ispace;

	i = 0;
	ispace = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			ispace += 1;
		i += 1;
	}
	if (tofind == ' ')
		return (ispace);
	return (i);
}

void	ft_split(char *str, long *tab)
{
	int		i;
	char	*word;
	int		index;

	word = malloc(sizeof(word) * ft_strlen(str, 0));
	if (word)
	{
		index = -1;
		i = -1;
		while (1)
		{
			word[++i] = *str;
			if (*str <= 32)
			{
				word[i] = 0;
				tab[++index] = ft_atol(word);
				i = -1;
			}
			if (*str == 0)
				break ;
			str += 1;
		}
		free(word);
	}
}
