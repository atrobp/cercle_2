/* ************************************************************************** */
/*                                      			if (success){};           */
/*                                                                            */
/*   ft_push_swap.h                                                           */
/*                                         			██   ██ ██████            */
/*   By: @atopalli | github/atrobp         			██   ██      ██           */
/*                                         			███████  █████            */
/*   Created: 2022/10/14 05:10:32 by @atopalli			 ██ ██                */
/*   Updated: 2022/10/16 16:10:17 by @atopalli			 ██ ███████.qc        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

//algos struct
typedef struct s_struct
{
	int	temp;
	int	counter;
}				t_struct;

//parsing n others
int		ft_strlen(char *str, char tofind);
long	ft_atol(char *str, int *tab);
void	ft_split(char *str, int *tab);
int		ft_isdouble(int *tab, int size);

//sorting algos
void	ft_bubblesort(int *tab, int size, int tolookfor);
void	ft_myalgo(int *tab, int size);
// void	ft_insertion(int *tab);
// void	ft_quicksort(int *tab, int size);

//decision maker
void	ft_decide(int *tab, int size);
int		ft_swapif(int *a, int *b, char tochange);

#endif
