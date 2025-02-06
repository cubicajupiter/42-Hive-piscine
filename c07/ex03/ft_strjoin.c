/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:55:17 by jvalkama          #+#    #+#             */
/*   Updated: 2025/02/01 21:16:50 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	lengths(int size, char **strings)
{
	int	count;

	count = 0;
	if (size > 0)
	{
		while (strings[size - 1][count] != '\0')
		{
			count++;
		}
		count += 1;
		return (count + lengths(size - 1, strings));
	}
	else
		return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		argument;
	int		total_chars;

	string = (char *) malloc(lengths(size, strs));
	if (size == 0)
		return (string);
	total_chars = 0;
	str_nb = 0;
	while (size > str_nb)
	{
		while ((*strs)[str_nb] != '\0')
		{
			string[total_chars] = (*strs)[str_nb]++;
			total_chars++;
		}
		if (str_nb < size - 1)
		{
			string[k] = *sep;
			total_chars += ;
		}
		str_nb++;
	}
	string[total_chars] = '\0';
	return (string);
}
