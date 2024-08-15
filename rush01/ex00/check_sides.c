/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sides.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:36:27 by lruiz-to          #+#    #+#             */
/*   Updated: 2024/08/05 21:42:18 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check4_col_up(int **board, int **input)
{
	int	cont_col;
	int	cont_row;
	int	cont;

	cont_col = 0;
	cont_row = 0;
	cont = 1;
	while (cont_col < 4)
	{
		if (input[0][cont_col] == 4 && input[3][cont_col] == 1)
		{
			while (cont <= 4 && cont_row < 4)
			{
				board[cont_row][cont_col] = cont;
				cont++;
				pos_row++;
			}
			pos_col++;
			cont = 1;
			pos_row = 0;
		}
		else
			write (1, "Error\n", 6);
	}
}

void	check4_col_down(int **board, int **input)
{
	int	cont_row;
	int	cont_col;
	int	cont;

	cont_row = 3;
	cont_col = 0;
	cont = 1;
	while (cont_col < 4)
	{
		if (input[1][cont_col] == 4 && input[0][cont_col] == 1)
		{
			while (cont <= 4 && cont_row >= 0)
			{
				if (board[cont_row][cont_col] == 0)
				{
					board[cont_row][cont_col] = cont;
					cont++;
					cont_row--;
				}
				else
					write (1, "Error\n", 6);
				cont_col++;
				cont_row = 0;
				cont = 1;
			}
		}
	}
}

void	check4_row_right(int **board, int **input)
{
	int	cont_row;
	int	cont_col;
	int	cont;

	cont_row = 0;
	cont_col = 0;
	cont = 1;
	while (cont_row < 4)
	{
		if (input[cont_row][2] == 4 && input[3][cont_row] == 1)
		{
			while (cont <= 4 && cont_col < 4)
			{
				if (board[cont_row][cont_col] == 0)
				{
					board[cont_row][cont_col] = cont;
					cont++;
					cont_col++;
				}
				else
					write (1, "Error\n", 6);
				cont_row++;
				cont_col = 0;
				cont = 1;
			}
		}
	}
}
