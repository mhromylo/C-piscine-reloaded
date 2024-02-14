/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhromylo <mhromylo@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:03:15 by mhromylo          #+#    #+#             */
/*   Updated: 2023/11/09 11:05:38 by mhromylo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *) malloc ((max - min) * sizeof (int));
	if (min >= max)
		return (NULL);
	while (i < (max - min))
	{
		arr[i] = (min + i);
		i++;
	}
	return (arr);
}
