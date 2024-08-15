/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diamoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:57:20 by diamoren          #+#    #+#             */
/*   Updated: 2024/08/12 15:06:48 by diamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *src)
{
	int	i;

	i = 0;
	if (src[i] == '\0')
	{
		return (1);
	}
	while (src[i] != '\0')
	{
		if ((src[i] < 'A' || src[i] > 'Z'))
		{
			return (0);
		}
		src ++;
	}
	return (1);
}
/*
int main()
{
    char test1[] = "HELLO";
    char test2[] = "Hello";
    char test3[] = "";



    printf("Eldestino es: %d \n", ft_str_is_uppercase (test1));
    printf("Eldestino es: %d \n", ft_str_is_uppercase (test2));
    printf("Eldestino es: %d \n", ft_str_is_uppercase (test3));

    return 0;
}*/
