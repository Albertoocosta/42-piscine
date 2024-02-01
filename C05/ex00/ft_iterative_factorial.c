/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 10:57:24 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/28 16:28:24 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		while (nb > 1)
		{
			result *= nb - 1;
			nb --;
		}
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_iterative_factorial(1));
	return (0);
}*/
