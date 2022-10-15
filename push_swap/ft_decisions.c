/* ************************************************************************** */
/*                                      			if (success){};           */
/*                                                                            */
/*   ft_decisions.c                                                           */
/*                                         			██   ██ ██████            */
/*   By: @atopalli | github/atrobp         			██   ██      ██           */
/*                                         			███████  █████            */
/*   Created: 2022/10/14 05:10:32 by @atopalli			 ██ ██                */
/*   Updated: 2022/10/15 12:55:19 by @atopalli			 ██ ███████.qc        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_swapif(int *a, int *b, char tochange)
{
	int	temp;

	if (*a < *b)
		return (0);
	if (tochange == 'y')
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
	return (1);
}

void	ft_decide(int *tab, int size)
{
	int	i;
	int	isordered;

	i = -1;
	isordered = 0;
	ft_bubblesort(tab, size - 1, tab[1]);
	while (++i < size - 1)
		printf("%d ", tab[i]);
}
