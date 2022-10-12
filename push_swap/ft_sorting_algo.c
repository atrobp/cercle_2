/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_algo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atopalli <atopalli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:16:46 by atopalli          #+#    #+#             */
/*   Updated: 2022/10/12 11:21:37 by atopalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_bubblesort(long *tab, int size, int call)
{
	int		rotate;
	long	temp;
	int		i;

	i = -1;
	rotate = 0;
	if (ft_swapif(&tab[0], &tab[1], 'y') == 0)
		printf("sa\n");
	else
		rotate += 1;
	while (rotate >= 0)
	{
		temp = tab[0];
		while (++i < size)
			if (tab[i + 1])
				tab[i] = tab[i + 1];
		tab[i - 1] = temp;
		i = -1;
		rotate -= 1;
		printf("ra\n");
	}
	i = -1;
	while (++i < size)
		printf("%li ", tab[i]);
	printf(" <--call #%d\n", call);
	if (call < size - 3)
		ft_bubblesort(tab, size, call + 1);
}
