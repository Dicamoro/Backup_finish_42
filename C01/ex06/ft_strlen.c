/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diamoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:55:39 by diamoren          #+#    #+#             */
/*   Updated: 2024/08/06 16:00:44 by diamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	cont;
	int	length;	

	cont = 0;
	length = 0;
	while (str[cont] != '\0')
	{
		length++;
		cont++;
	}
	return (length);
}
/*
int main()
{
        char str[] = "Diana";
        int length = ft_strlen(str);
        printf("%d\n", length);
        return (0);
}*/
