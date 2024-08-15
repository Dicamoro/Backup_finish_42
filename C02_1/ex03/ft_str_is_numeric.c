/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diamoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:30:31 by diamoren          #+#    #+#             */
/*   Updated: 2024/08/12 13:53:43 by diamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_str_is_numeric(char *src)
{
	int	i;

	i = 0;
	if (src[i] == '\0')
	{
		return (1);
	}
	while (src[i] != '\0')
	{
		if ((src[i] < '0' || src[i] > '9'))
		{
			return (0);
		}
		src ++;
	}
	return (1);
}
/*
int	main()
{
    char test1[] = "123456";
    char test2[] = "123ab56";
    char test3[] = "";
    
    
    
    printf("Eldestino es: %d \n", ft_str_is_numeric (test1));
    printf("Eldestino es: %d \n", ft_str_is_numeric (test2));
    printf("Eldestino es: %d \n", ft_str_is_numeric (test3));
    
    return 0;
}*/
