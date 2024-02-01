/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:07:04 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/29 18:59:28 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*final;
	int	c;

	c = 0;
	if (min >= max)
		return (NULL);
	final = malloc(sizeof (int) * (max - min));
	if (final == NULL)
		return (NULL);
	while (min < max)
		final[c++] = min++;
	return (final);
}
/*
#include <stdio.h>
int	main(void)
{
	int	t;
	int	*result;

	result = (ft_range(-9 ,5));
	for (t = 0; t < (5 - (-9) + 1) ; t++)
	{
		printf("%d, ", result[t]);
	}
	return (0);
}*/
