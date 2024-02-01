/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:11:35 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/22 09:15:38 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != 0) || (s2[i] != 0))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	main()
{
	char	src[] = "GOTCHA";
	char	dest[] = "Awake";

	printf("%d\n", ft_strcmp(src, dest));
	printf("%d\n", strcmp(src, dest));
	return (0);
}*/
