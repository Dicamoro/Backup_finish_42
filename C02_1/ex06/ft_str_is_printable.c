/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diamoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:07:59 by diamoren          #+#    #+#             */
/*   Updated: 2024/08/12 15:25:20 by diamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_str_is_printable(char *src)
{
	int	i;

	i = 0;
	if (src[i] == '\0')
	{
		return (1);
	}
	while (src[i] != '\0')
	{
		if ((src[i] < 32 || src[i] > 126))
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
    char test1[] = "Hello World";
    char test2[] = "Hello\tWorld!";
    char test3[] = "";
    
    
    
    printf("Eldestino es: %d \n", ft_str_is_printable (test1));
    printf("Eldestino es: %d \n", ft_str_is_printable (test2));
    printf("Eldestino es: %d \n", ft_str_is_printable (test3));
    
    return 0;
}*/
