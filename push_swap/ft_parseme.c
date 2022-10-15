/* ************************************************************************** */
/*                                      			if (success){};           */
/*                                                                            */
/*   ft_parseme.c                                                             */
/*                                         			██   ██ ██████            */
/*   By: @atopalli | github/atrobp         			██   ██      ██           */
/*                                         			███████  █████            */
/*   Created: 2022/10/14 05:10:32 by @atopalli			 ██ ██                */
/*   Updated: 2022/10/14 09:10:54 by @atopalli			 ██ ███████.qc        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_strlen(char *str, char tofind)
{
	int	i;
	int	isspace;

	isspace = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			isspace += 1;
		i += 1;
	}
	if (tofind == ' ')
		return (isspace);
	return (i);
}

long	ft_atol(char *str, int *tab)
{
	long	num;
	int		isneg;

	num = 0;
	isneg = 1;
	if (*str == '-')
	{
		isneg = -1;
		str += 1;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			num = num * 10 + (*str - '0');
		else
			break ;
		str += 1;
	}
	if (num < INT_MIN + 1 || num > INT_MAX || *str)
	{
		printf("Error\n");
		free(tab);
		exit(0);
	}
	return (num * isneg);
}

void	ft_split(char *str, int *tab)
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
				tab[++index] = (int)ft_atol(word, tab);
				i = -1;
			}
			if (*str == 0)
				break ;
			str += 1;
		}
		free(word);
	}
}

int	ft_isdouble(int *tab, int size)
{
	int	*copy;
	int	i;
	int	j;

	copy = malloc(sizeof(copy) * 1000);
	i = -1;
	j = -1;
	while (++i < size)
		copy[++j] = tab[i];
	j = -1;
	while (++j < size)
	{
		i = -1;
		while (tab[++i])
		{
			if (copy[j] == tab[i] && j != i)
			{
				printf("Error\n");
				free(copy);
				return ('y');
			}
		}
	}
	free(copy);
	return (0);
}
