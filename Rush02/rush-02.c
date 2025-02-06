/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:24:19 by jvalkama          #+#    #+#             */
/*   Updated: 2025/02/02 12:13:36 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft_strstr" // apufunktiot voi olla omissa tiedostoissaan

int	dict_length(int fd, int dict_start) // string start needed for counting len for match buffer only.
{
	int		count;
	char	temp[1];

	count = 0;
	while (read(file_descriptor, &temp, 1))
		count++;
	return (count);
}

void traverser()
{
	// from :
	// until \n
	// trims whitespace 
}

int	main(int argc, char *argv[])
{
	size_t	bytes_read;
	char	*match_buffer;
	//char	temp_totality[1000000]; //vaihtoehto B - voi lopulta olla CONSTANT MACRO, jottei kuluta heappia / tai incrementaatio read()
	char	*dict_buffer;
	char	*search_key;
	int		i;
	int		file_descriptor;

	if (argc == 2)
		file_descriptor = open("numbers.dict", O_RDONLY); //open dict
	else if (argc == 3)
		file_descriptor = open(argv[1], O_RDONLY);
	dict_bytes = dict_length(file_descriptor); // gets dict size
	dict_buffer = (char *) malloc(dict_bytes); // allocates dict size

	i = 0;
	while (arg_element[i])
		

	match_buffer = (char *) malloc();


	file_descriptor = open("numbers.dict", O_RDONLY);
	if (file_descriptor == -1)
	{
		write(1, "Dict Error\n", 11);
	}
	else if (file_descriptor == 0)
	{
		write(1, "")
	}
	bytes_read = read(file_descriptor, buffer, sizeof(buffer));
	while (read()) //reads cont into buffer, but outputs BYTE SIZE.
	write(entry)
}
// OLD!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
