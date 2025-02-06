/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 09:54:50 by jvalkama          #+#    #+#             */
/*   Updated: 2025/02/02 19:33:59 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}		t_stock_str;

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str s_stock_str		my_element;
	struct s_stock_str			*structs;
	int							i;
	int							j;
	char						*copy;

	i = 0;
	while (i < ac - 1)
	{
		j = 0;
		copy = (char *) malloc(sizeof(av[i]) / sizeof(char));
		while (while copy <= j)
		{
			copy[j] = av[i][j];
			j++;
		}
		my_element[i].size = j;
		my_element[i].str = av[i];
		my_element[i].copy = &copy;
		structs[i] = my_element;
		i++;
	}	
	return (structs);
}

#include <stdio.h>
int	main(void)
{
	char	*av[] = {"ape", "cake", "in", "school"};
	int		ac = 5;
	while	(i < ac)
	{
		printf("%s", ft_strs_to_tab(ac, av[i]));
		i++;
	}
}
