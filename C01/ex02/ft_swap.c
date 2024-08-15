/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diamoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:43:55 by diamoren          #+#    #+#             */
/*   Updated: 2024/08/06 16:23:28 by diamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	swap;
	int	a;
	int	b;

	swap = 0;
	a = 2;
	b = 8;
	ft_swap (&a, &b);
	printf("%d\n%d", a, b);
}*/
