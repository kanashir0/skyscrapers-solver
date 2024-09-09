/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraints.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:27:07 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/25 19:15:46 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"values.h"

#ifndef CONSTRAINTS_H
# define CONSTRAINTS_H

int	is_valid_choice(
		int input_constraints[SIZE][SIZE], int board[SIZE][SIZE], int row, int col);

#endif