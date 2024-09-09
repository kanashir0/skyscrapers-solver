/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:18:55 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/25 19:14:17 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	"../include/values.h"

void	print_number(int num)
{
	char	num_c;

	num_c = num + '0';
	write(1, &num_c, 1);
	write(1, &" ", 1);
	return ;
}

void	print_board(int board[SIZE][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			print_number(board[i][j]);
			j++;
		}
		write(1, &"\n", 1);
		i++;
	}
}

int	unique_num_row_col(int board[SIZE][SIZE], int row, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			if (board[row][col] == board[i][j] &&
			((i != row && j == col) || (i == row && j != col)))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
