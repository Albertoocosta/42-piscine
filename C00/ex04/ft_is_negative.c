/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:45:47 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/13 11:27:05 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	result;

	if (n >= 0)
	{
		result = 'P';
		write(1, &result, 1);
	}
	else
	{
		result = 'N';
		write(1, &result, 1);
	}
}
