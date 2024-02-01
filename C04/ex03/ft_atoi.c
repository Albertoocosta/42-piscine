/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:11:50 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/25 14:42:21 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 1;
	result = 0;
	while (*str < 33)
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 43)
			str++;
		if (*str == 45)
		{
			i *= -1;
			str++;
		}
	}
	while ((*str >= 48) && (*str <= 57))
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (i * result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("   ----++-+-+656531 ijei"));
	return (0);
}*/
