/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diamoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:27:44 by diamoren          #+#    #+#             */
/*   Updated: 2024/08/12 18:39:05 by diamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] -32;
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



    printf("Eldestino es: %s \n", ft_strupcase (test1));
    printf("Eldestino es: %s \n", ft_strupcase (test2));
    printf("Eldestino es: %s \n", ft_strupcase (test3));
    printf("Eldestino es: %s \n", ft_strupcase (test4));

    return (0);
}*/
