/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:17:06 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/29 17:26:29 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	unsigned int	result;

	result = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (result * result < (unsigned int) nb)
		result++;
	if (result * result == (unsigned int) nb)
		return (result);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_sqrt(2147483647));
	return (0);
}*/
