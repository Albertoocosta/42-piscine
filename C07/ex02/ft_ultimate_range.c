/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:06:38 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/30 14:26:07 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*final;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	final = malloc(sizeof(int) * (max - min));
	if (final == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		final[i] = min;
		i++;
		min++;
	}
	*range = final;
	return (i);
}
