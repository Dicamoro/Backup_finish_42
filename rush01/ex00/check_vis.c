/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_vis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:29:16 by lruiz-to          #+#    #+#             */
/*   Updated: 2024/08/05 23:01:19 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool	check_vis_col_up(int **board, int **input, int col)
{
	int	highest;
	int	pos_row;
	int	cont_vis;

	highest = 0;
	cont_vis = 0;
	pos_row = 0;
	while (pos_row < 4)
	{
		if (board[pos_row][col] > highest)
		{
			highest = board[pos_row][col];
			cont_vis++;
		}
		pos_row++;
	}
	if (input[0][col] == cont_vis)
		return (true);
	else
		return (false);
}

bool	check_vis_col_down(int **board, int **input, int col)
{
	int	highest;
	int	pos_row;
	int	cont_vis;

	highest = 0;
	cont_vis = 0;
	pos_row = 3;
	while (pos_row < 4)
	{
		if (board[pos_row][col] > highest)
		{
			highest = board[pos_row][col];
			cont_vis++;
		}
		pos_row--;
	}
	if (input[1][col] == cont_vis)
		return (true);
	else
		return (false);
}

bool	check_vis_row_right(int 92         cont_vis = 0;
 **board, int **input, int row)
{
	int	highest;
	int	pos_col;
	int	cont_vis;

	highest = 0;
	cont_vis = 0;
	pos_col = 0;
	while (pos_col < 4)
	{
		if (board[row][pos_col] > highest)
		{
			highest = board[row][pos_col];
			cont_vis++;
		}
		pos_col++;
	}
	if (input[2][col] == cont_vis)
		return (true);
	else
		return (false);
}

bool	check_vis_row_left(int **board, int **input, int row)
{
	int	highest;
	int	pos_col;
	int	cont_vis;

	highest = 0;
	cont_vis = 0;
	pos_col = 3;
	while (pos_col < 4)
	{
		if (board[row][pos_col] > highest)
		{
			highest = board[row][pos_col];
			cont_vis++;
		}
		pos_col--;
	}
	if (input[3][col] == cont_vis)
		return (true);
	else
		return (false);
}
