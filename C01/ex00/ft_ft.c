/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:56:45 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/17 14:19:13 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char str)
{
	write(1, &str, 1);
}
void	ft_ft(int *nbr)
{
	int	a;
	a = *nbr;
	*nbr = a;
	print(&nbr + '0');
}

int	main()
{
	int	b;

	b = 42;
	ft_ft(&b);
	return (0);
}
