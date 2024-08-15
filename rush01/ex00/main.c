/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:44:16 by lruiz-to          #+#    #+#             */
/*   Updated: 2024/08/05 21:55:11 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	str_to_int(char *str, int size, int **arg)
{
	int	cont_str;
	int	cont_row;
	int	cont_col;

	cont_str = 0;
	cont_row = 0;
	cont_col = 0;
	while (cont_str < size && cont_row < 4 && cont_col < 4)
	{
		if (str[cont_str] >= 49 && str[cont_str] <= 52)
		{
			arg[cont_row][cont_col] = str[cont_str] - 48;
			cont_str++;
			cont_col++;
		}
		else if (str[cont_str] >= 53 || str[cont_str] == 48)
			write (1, "Error\n", 6);
		else if (str[cont_str] == 32)
			cont_str++;
		if (cont_col == 4)
		{
			cont_col = 0;
			cont_row++;
		}
	}
}

//function to know the size of the array
int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str != '\0')
	{
		str++;
		cont++;
	}
	return (cont);
}

int	main(int argc, char **argv)
{
	int	size;
	int	**input;

	if (argc == 2)
	{
		size = ft_strlen(argv[1]);
		str_to_int(argv[1], size, input);
		write (1, &size, 1);
	}
	else
		write (1, "Error\n", 6);
}
