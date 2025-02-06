/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:54:03 by jvalkama          #+#    #+#             */
/*   Updated: 2025/02/02 10:30:16 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	arr_size(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;
	size_t	size;

	i = 0;
	size = arr_size(src);
	dup = (char *) malloc(size);
	if (dup == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
