/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrescri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 21:26:49 by adrescri          #+#    #+#             */
/*   Updated: 2024/07/27 23:40:40 by diamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int cols, char init, char middle, char final)
{
	int	i;

	i = 0;
	if (cols >= 1)
	{
		ft_putchar(init);
	}
	while (i < (cols - 2))
	{
		ft_putchar(middle);
		i++;
	}
	if (cols >= 2)
	{
		ft_putchar(final);
	}
	ft_putchar('\n');
}

void	print_rows(int cols, int rows)
{
	int	i;

	i = 0;
	if (rows >= 1)
	{
		print_line(cols, '/', '*', '\\');
	}
	while (i < (rows - 2))
	{
		print_line(cols, '*', ' ', '*');
		i++;
	}
	if (rows >= 2)
	{
		print_line(cols, '\\', '*', '/');
	}
}

void	rush(int x, int y)
{
	if (x < 0
		|| y < 0)
	{
		write(1,"Error: Numeros de columnas/filas ", 33);
		write(1,"deben ser positivos.\n", 22);
	} else 
	{
		if (x > 1000
			|| y > 1000)
		{
			write(1,"Error: Maximo numeros de ",25); 
			write(1,"columnas/filas: 1000.\n" ,23);
		} else 
		{
			print_rows(x, y);
		}
	}
}
