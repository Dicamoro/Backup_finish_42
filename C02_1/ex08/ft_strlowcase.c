/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diamoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:34:47 by diamoren          #+#    #+#             */
/*   Updated: 2024/08/12 19:06:35 by diamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
    char test1[] = "Hello World";
    char test2[] = "HelLO";
    char test3[] = "1234@|@#";
    char test4[] = "";

    printf("Eldestino es: %s \n", ft_strlowcase (test1));
    printf("Eldestino es: %s \n", ft_strlowcase (test2));
    printf("Eldestino es: %s \n", ft_strlowcase (test3));
    printf("Eldestino es: %s \n", ft_strlowcase (test4));

    return (0);
}*/
