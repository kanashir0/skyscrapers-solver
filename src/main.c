/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:17:41 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/25 19:43:53 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include    "../include/utils.h"
#include    "../include/choice.h"
#include	"../include/values.h"

void	initialize_board(int board[SIZE][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	return ;
}

int	validate_input(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			return (0);
		if (str[i] >= '0' && str[i] <= (SIZE + '0'))
		{
			count++;
		}
		i++;
	}
	if (count == (SIZE * 4))
		return (1);
	else
		return (0);
}

void	initialize_params(int input_constraints[SIZE][SIZE], char *str)
{
	int	argv_index;
	int	arr_number;
	int	arr_index;

	argv_index = 0;
	arr_number = 0;
	arr_index = 0;
	while (str[argv_index] != '\0')
	{
		if (str[argv_index] >= '0' && str[argv_index] <= (SIZE + '0'))
		{
			if (arr_index == SIZE)
			{
				arr_number++;
				arr_index = 0;
			}
			input_constraints[arr_number][arr_index] = str[argv_index] - '0';
			arr_index++;
		}
		argv_index++;
	}
}

int	main(int argc, char *argv[])
{
	int	board[SIZE][SIZE];
	int	input_constraints[SIZE][SIZE];

	if (argc == 2)
	{
		if (validate_input(argv[1]) == 1)
			initialize_params(input_constraints, argv[1]);
		else
		{
			write(1, &"Invalid parameter, try again using the exactly "
				"amount of numbers to solve the puzzle.\n", 72);
			return (0);
		}
		initialize_board(board);
		if (solve(input_constraints, board, 0, 0) == 1)
			print_board(board);
		else
			write(1, &"The given numbers does not have a solution.\n", 1);
	}
	else
		write(1, "Invalid number of parameters", 29);
	return (0);
}
