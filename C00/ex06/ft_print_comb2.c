/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:18:18 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/12 13:24:57 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writeft(char a)
{
	char	b;

	if (a < 10)
	{
		a = a + 48;
		write(1, "0", 1);
		write(1, &a, 1);
	}
	else
	{
		b = a / 10 + 48;
		write(1, &b, 1);
		b = a % 10 + 48;
		write(1, &b, 1);
	}
}

void	ft_print_comb2(void)
{
	char	comb[2];

	comb[0] = 0;
	while (comb[0] < 99)
	{
		comb[1] = comb[0] + 1;
		while (comb[1] < 100)
		{
			writeft(comb[0]);
			write(1, " ", 1);
			writeft(comb[1]);
			if (comb[0] == 98 && comb[1] == 99)
				break ;
			else
				write(1, ", ", 2);
			comb[1]++;
		}
		comb[0]++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
