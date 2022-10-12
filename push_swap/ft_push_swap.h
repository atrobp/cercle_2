/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atopalli <atopalli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:45:33 by atopalli          #+#    #+#             */
/*   Updated: 2022/10/12 10:27:09 by atopalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

//parse stuff
void	ft_split(char *str, long *tab);
int		ft_strlen(char *str, char tofind);
long	ft_atol(char *str);

//decision maker
int		ft_swapif(long *a, long *b, char todo);
void	isarraysorted(long *tab);

//sorting algo mixted
void	ft_bubblesort(long *tab, int size, int call);

#endif