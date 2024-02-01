/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:47:25 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/23 09:16:20 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == 0)
		return (str);
	else
	{
		while (*str != 0)
		{
			i = 0;
			while (str[i] == to_find[i])
			{
				if (to_find[i + 1] == 0)
					return (str);
				i++;
			}
			str++;
		}
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	haystack[] = "anaananas 1234";
	char	needle[] = "";

	//printf("%s\n", ft_strstr(haystack, needle));
	printf("%s\n", strstr(haystack, needle));
	return (0);
}*/
