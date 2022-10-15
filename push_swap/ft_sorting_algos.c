/* ************************************************************************** */
/*                                      			if (success){};           */
/*                                                                            */
/*   ft_sorting_algos.c                                                       */
/*                                         			██   ██ ██████            */
/*   By: @atopalli | github/atrobp         			██   ██      ██           */
/*                                         			███████  █████            */
/*   Created: 2022/10/14 07:10:00 by @atopalli			 ██ ██                */
/*   Updated: 2022/10/15 12:42:50 by @atopalli			 ██ ███████.qc        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_bubblesort(int *tab, int size, int tolookfor)
{
	int	temp;
	int	i;
	int	rotation;

	rotation = 2;
	if (ft_swapif(&tab[0], &tab[1], 'y') == 1)
		printf("sa\n");
	else
		rotation += 1;
	i = -1;
	while (--rotation >= 1)
	{
		temp = tab[0];
		while (++i < size)
			if (i < size - 1)
				tab[i] = tab[i + 1];
		tab[i - 1] = temp;
		printf("ra\n");
		i = -1;
	}
	if (tab[0] != tolookfor || tab[1] != tolookfor)
		ft_bubblesort(tab, size, tolookfor);
}

// int	*ft_quicksort(int *tab, int size)
// {
// 	int	*copy;
// 	int	i;

// 	i = -1;
// 	copy = malloc(sizeof(copy) * size + 1);
// 	if (copy)
// 	{
// 		while (++i < size)
// 		{
// 			if (ft_swapif(&tab[i], &tab[i + 1], 'y') == 1)
// 				printf("sa\n");
// 			copy[i] = tab[i];
// 			printf("pb\n");
// 		}
// 		return (copy);
// 	}
// 	return (0);
// }