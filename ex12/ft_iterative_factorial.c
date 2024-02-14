/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhromylo <mhromylo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:31:44 by mhromylo          #+#    #+#             */
/*   Updated: 2023/11/07 14:58:37 by mhromylo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	else if (nb <= 1)
		return (factorial);
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}
