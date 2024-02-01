/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:31:26 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/29 11:16:49 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	if (power > 1)
	{
		result *= ft_recursive_power(nb, power - 1);
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_power(0, 2));
	return (0);
}*/
