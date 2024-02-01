/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:09:35 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/12 13:27:12 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writef(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a[3];

	a[0] = 47;
	a[1] = 48;
	a[2] = 49;
	while (++a[0] <= '7')
	{
		while (++a[1] <= '8')
		{
			while (++a[2] <= '9')
			{
				writef(a[0], a[1], a[2]);
			}
			a[2] = a[1] + 1;
		}
		a[1] = a[0] + 1;
		a[2] = a[1] + 1;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
