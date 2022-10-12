/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atopalli <atopalli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:37:30 by atopalli          #+#    #+#             */
/*   Updated: 2022/10/12 11:16:30 by atopalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_decide(long *tab, int size)
{
	int			i;
	static int	isordered = 0;

	i = -1;
	while (++i < size)
		if (tab[i + 1])
			isordered += ft_swapif(&tab[i], &tab[i + 1], 0);
	if (isordered >= size / 2 && isordered + 1 < size)
		ft_bubblesort(tab, size, 0);
}

int	main(int ac, char **av)
{
	long		*tab;
	static int	i = 1;
	static int	flag = 0;

	if (ac == 2)
	{
		ac = ft_strlen(av[1], ' ') + 1;
		tab = malloc(sizeof(tab) * ac);
		ft_split(av[1], tab);
	}
	else
	{
		tab = malloc(sizeof(tab) * ac + 1);
		while (i < ac)
		{
			tab[i - 1] = ft_atol(av[i]);
			i += 1;
		}
		tab[i - 1] = 0;
		flag = 1;
	}
	if (tab)
		ft_decide(tab, ac - flag);
	return (0);
}
