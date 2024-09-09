/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:26:33 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/25 19:28:16 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"values.h"

#ifndef UTILS_H
# define UTILS_H

void	print_board(int board[SIZE][SIZE]);

int		unique_num_row_col(int board[SIZE][SIZE], int row, int col);

#endif