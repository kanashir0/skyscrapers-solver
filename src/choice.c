/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choice.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:59:25 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/25 19:18:47 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "../include/constraints.h"

int	solve(int input_constraints[SIZE][SIZE], int board[SIZE][SIZE], int row, int col)
{
	int	num;

	if (row == SIZE)
		return (1);
	if (col == SIZE)
		return (solve(input_constraints, board, row + 1, 0) == 1);
	num = 1;
	while (num <= SIZE)
	{
		board[row][col] = num;
		if (is_valid_choice(input_constraints, board, row, col) == 1)
		{
			if (solve(input_constraints, board, row, col + 1) == 1)
				return (1);
		}
		num++;
	}
	board[row][col] = 0;
	return (0);
}
