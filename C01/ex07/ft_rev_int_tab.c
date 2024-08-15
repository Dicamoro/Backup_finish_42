/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diamoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:47:41 by diamoren          #+#    #+#             */
/*   Updated: 2024/08/06 15:18:32 by diamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	elem2exch;

	i = 0;
	while (i < size / 2)
	{
		elem2exch = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = elem2exch;
		i++;
	}
}

/*
int	main(void)
{
	int	array[] = { 1, 2, 3, 4, 5};
	int	size;
	
	size = 5;
	int	i;
	
	i = 0;
	ft_rev_int_tab(array, size);
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}*/
