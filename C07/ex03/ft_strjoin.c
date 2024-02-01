/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:47:49 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/31 12:24:32 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	length(char **strs, int size, char *sep)
{
	int	i;
	int	lentotal;

	i = 0;
	lentotal = ft_strlen(sep) * size - 1;
	while (i < size)
	{
		lentotal += ft_strlen(strs[i]);
		i++;
	}
	return (lentotal);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;

	i = 0;
	result = malloc(sizeof(char) * length(strs, size, sep) + 1);
	if (!result)
		return (NULL);
	if (size == 0 || strs == 0)
	{
		result = malloc(1);
		*result = 0;
		return (result);
	}
	while (i <= size - 1)
	{
		ft_strcat(result, strs[i]);
		if (!(i == size - 1))
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	char	*arr[] = {};
	char	*sep = ",";
	char	*result;
	result = ft_strjoin(0, arr, sep);
	printf("%s\n", result);
	
	return (0);
}
#include <stdio.h>
int	main(void)
{
	int		size_test = 3;
	char	**strs_test = ["12345", "abcde", "09876"];

	//strs_test[0] = "12345";
	//strs_test[1] = "abcde";
	//strs_test[2] = "09876";

	char *sep_test = "___";
	printf("\"%s\"", ft_strjoin(size_test, strs_test, sep_test));
	//free(strs_test);
}*/
