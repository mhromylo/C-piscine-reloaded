/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disp_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhromylo <mhromylo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:41:00 by mhromylo          #+#    #+#             */
/*   Updated: 2023/11/10 16:21:06 by mhromylo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_disp_file(char *filename)
{
	int		fd;
	char	buffer;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	while (read(fd, &buffer, 1))
	{
		write(1, &buffer, 1);
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		if (argc == 1)
			write(2, "File name missing.\n", 19);
		return (1);
	}
	ft_disp_file(argv[1]);
	return (0);
}
