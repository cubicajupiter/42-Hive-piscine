/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:01:27 by jvalkama          #+#    #+#             */
/*   Updated: 2025/01/29 15:19:17 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	odd_subtraction(int nb, int odd, int count)
{
	nb = nb - odd;
	if (nb >= 0)
	{
		return (count += odd_subtraction(nb, (odd + 2), 1));
	}
	else
		return (count);
}

int	ft_sqrt(int nb)
{
	int	count;

	count = odd_subtraction(nb, 1, 0);
	if (count * count == nb)
		return (count);
	else
		return (0);
}
