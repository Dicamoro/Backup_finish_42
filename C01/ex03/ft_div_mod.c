/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diamoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:34:19 by diamoren          #+#    #+#             */
/*   Updated: 2024/08/06 16:29:28 by diamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod (10, 2, &div, &mod);
	printf("div %d, mod %d", div, mod);
}

--------------------
int variable = 9
int *puntero;
puntero = &variable

*puntero
&variable
--------------------*/
