/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraints.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:06:51 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/25 19:17:53 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/utils.h"
#include	"../include/values.h"

int	is_up_clue_valid(
	int input_constraints[SIZE][SIZE], int board[SIZE][SIZE], int col)
{
	int	i;
	int	up_constraint;
	int	visible_buildings;
	int	tallest_building;

	up_constraint = input_constraints[0][col];
	visible_buildings = 0;
	tallest_building = 0;
	i = 0;
	while (i < SIZE)
	{
		if (board[i][col] == 0)
			return (1);
		if (board[i][col] > tallest_building)
		{
			tallest_building = board[i][col];
			visible_buildings++;
		}
		i++;
	}
	if (visible_buildings == up_constraint)
		return (1);
	return (0);
}

int	is_down_clue_valid(
	int input_constraints[SIZE][SIZE], int board[SIZE][SIZE], int col)
{
	int	i;
	int	down_constraint;
	int	visible_buildings;
	int	tallest_building;

	down_constraint = input_constraints[1][col];
	visible_buildings = 0;
	tallest_building = 0;
	i = SIZE - 1;
	while (i >= 0)
	{
		if (board[i][col] == 0)
			return (1);
		if (board[i][col] > tallest_building)
		{
			tallest_building = board[i][col];
			visible_buildings++;
		}
		i--;
	}
	if (visible_buildings == down_constraint)
		return (1);
	return (0);
}

int	is_left_clue_valid(
	int input_constraints[SIZE][SIZE], int board[SIZE][SIZE], int row)
{
	int	i;
	int	left_constraint;
	int	visible_buildings;
	int	tallest_building;

	left_constraint = input_constraints[2][row];
	visible_buildings = 0;
	tallest_building = 0;
	i = 0;
	while (i < SIZE)
	{
		if (board[row][i] == 0)
			return (1);
		if (board[row][i] > tallest_building)
		{
			tallest_building = board[row][i];
			visible_buildings++;
		}
		i++;
	}
	if (visible_buildings == left_constraint)
		return (1);
	return (0);
}

int	is_right_clue_valid(
	int input_constraints[SIZE][SIZE], int board[SIZE][SIZE], int row)
{
	int	i;
	int	right_constraint;
	int	visible_buildings;
	int	tallest_building;

	right_constraint = input_constraints[3][row];
	visible_buildings = 0;
	tallest_building = 0;
	i = SIZE - 1;
	while (i >= 0)
	{
		if (board[row][i] == 0)
			return (1);
		if (board[row][i] > tallest_building)
		{
			tallest_building = board[row][i];
			visible_buildings++;
		}
		i--;
	}
	if (visible_buildings == right_constraint)
		return (1);
	return (0);
}

int	is_valid_choice(
	int input_constraints[SIZE][SIZE], int board[SIZE][SIZE], int row, int col)
{
	if (unique_num_row_col(board, row, col) == 0)
		return (0);
	if (is_up_clue_valid(input_constraints, board, col) == 0)
		return (0);
	if (is_down_clue_valid(input_constraints, board, col) == 0)
		return (0);
	if (is_left_clue_valid(input_constraints, board, row) == 0)
		return (0);
	if (is_right_clue_valid(input_constraints, board, row) == 0)
		return (0);
	return (1);
}
