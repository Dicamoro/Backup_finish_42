/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diamoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:01:42 by diamoren          #+#    #+#             */
/*   Updated: 2024/08/12 18:42:18 by diamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char test1[] = "Hola";
	char test2[] = "Covid19";
	char test3[] = "";

	printf("%d\n", ft_str_is_alpha(test1));
	printf("%d\n", ft_str_is_alpha(test2));
	printf("%d\n", ft_str_is_alpha(test3));

	return (0);
}*/
