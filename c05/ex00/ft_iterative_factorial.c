/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:58:24 by jvalkama          #+#    #+#             */
/*   Updated: 2025/02/03 12:46:31 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

int	main(void)
{
	#include <stdio.h>
	int	num;
	num = 5;
	int	fact;
	fact = ft_iterative_factorial(num);
	printf("%d", fact);
	return 0;
}
