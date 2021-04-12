/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step2_board.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:26:50 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/04/11 20:29:01 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STEP2_BOARD_H
# define STEP2_BOARD_H

void	init_columns(int **board, int *vals);
void	init_rows(int **board, int *vals);
int		**initialize_board(int *vals);

#endif
