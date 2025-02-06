/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 09:54:05 by jvalkama          #+#    #+#             */
/*   Updated: 2025/02/03 17:48:15 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H_
#define FT_BOOLEAN_H_

	typedef	enum booli
	{
		FALSE,
		TRUE
	}
		t_bool;

	#define EVEN_MSG "I have an even number of arguments."
	#define ODD_MSG "I have an odd number of arguments."

	//#define FALSE 0
	//#define TRUE 1

	#define SUCCESS 1

	#define EVEN(nbr) nbr % 2 == 0

#endif
