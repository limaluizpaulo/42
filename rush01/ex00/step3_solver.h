/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step3_solver.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:30:22 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/04/11 20:32:10 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STEP3_SOLVER_H
# define STEP3_SOLVER_H

int	is_safe(int **board, int val, int row, int col);
int	solver_check_row(int **board, int row, int col);
int	solver_check_col(int **board, int row, int col);
int	solver(int **board, int row, int col);

#endif
