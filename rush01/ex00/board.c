/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:01:22 by lruiz-to          #+#    #+#             */
/*   Updated: 2024/08/06 12:22:56 by diamoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fill the array with zeros
void	prepare_board(int **board)
{
	int	cont_x;
	int	cont_y;

	cont_x = 0;
	cont_y = 0;
	while (cont_y < 4)
	{
		while (cont_x < 4)
		{
			board[cont_x][cont_y] = 0;
			cont_x++;
		}
		cont_x = 0;
		cont_y++;
	}
}
