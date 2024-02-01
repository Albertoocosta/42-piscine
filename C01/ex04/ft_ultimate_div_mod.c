/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:43:41 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/17 13:44:43 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(char str)
{
	write(1, &str, 1);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resultdiv;
	int	resultmod;

	resultdiv = *a / *b;
	resultmod = *a % *b;
	*a = resultdiv;
	*b = resultmod;
	printer(&a + '0');
}

int 	main(void)
{
	int	i;
	int	j;

	i = 5;
	j = 2;
	ft_ultimate_div_mod(&i, &j);
	return (0);
}
