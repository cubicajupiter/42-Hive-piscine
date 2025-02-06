/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:54:25 by jvalkama          #+#    #+#             */
/*   Updated: 2025/02/04 11:01:40 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return (NULL);
	array = (int *) malloc((max - min) * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min = 2;
	int	max = 6;
	int	*arr = ft_range(min, max);
	int	i = 0;
	while (i < max - 2)
	{
		printf("%d ", arr[i]);
		i++;
	}
}*/
