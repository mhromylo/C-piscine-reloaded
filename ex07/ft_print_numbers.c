/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhromylo <mhromylo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:41:28 by mhromylo          #+#    #+#             */
/*   Updated: 2023/11/09 14:16:43 by mhromylo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	a;

	a = '0';
	while (a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}
