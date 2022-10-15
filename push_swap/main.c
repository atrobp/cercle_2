/* ************************************************************************** */
/*                                      			if (success){};           */
/*                                                                            */
/*   main.c                                                                   */
/*                                         			██   ██ ██████            */
/*   By: @atopalli | github/atrobp         			██   ██      ██           */
/*                                         			███████  █████            */
/*   Created: 2022/10/14 05:10:32 by @atopalli			 ██ ██                */
/*   Updated: 2022/10/15 09:08:17 by @atopalli			 ██ ███████.qc        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int ac, char **av)
{
	int	*tab;
	int	i;

	i = 0;
	if (ac > 1)
	{
		if (ac == 2)
		{
			ac = ft_strlen(av[1], ' ') + 1;
			tab = malloc(sizeof(tab) * ft_strlen(av[1], ' '));
			ft_split(av[1], tab);
		}
		else
		{
			tab = malloc(sizeof(tab) * ac);
			while (++i < ac)
				tab[i - 1] = (int)ft_atol(av[i], tab);
		}
		if (ft_isdouble(tab, ac) != 'y')
			ft_decide(tab, ac);
		free((tab));
	}
	return (0);
}
