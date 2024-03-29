/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:08:11 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/17 11:26:41 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!((str[i] >= 65 && str[i] <= 90) || 
				(str[i] >= 97 && str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}
