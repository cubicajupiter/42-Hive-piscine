/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:38:14 by jvalkama          #+#    #+#             */
/*   Updated: 2025/01/30 13:39:37 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char *a[], char *b[])
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	ft_strcmp(char *s1, char *s2)
{
	int			i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	bubble_sort(char *argv[], int n)
{
	int		loops;
	int		j;
	int		swapped;

	loops = 0;
	while (loops < n - 1)
	{
		swapped = 0;
		j = 0;
		while (j < n - loops - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
				swapped = 1;
			}
			j++;
		}
		if (swapped == 0)
			break;
		loops++;
	}
}

int		main(int argc, char *argv[])
{
	int		n;
	int		i;
	int		j;

	if (argc < 2)
		return (0);
	n = argc - 1;
	bubble_sort(argv, n);
	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
