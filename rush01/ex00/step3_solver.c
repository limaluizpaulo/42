/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step3_solver.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-b <lpaulo-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:08:19 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/04/12 12:43:08 by lpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "step4_check.h"

int	is_safe(int **board, int val, int row, int col) // função checa se o valor passado está presente na mesma linha e coluna
{
	int i;

	i = 1;
	while (i < 5)
	{
		if (board[i++][col] == val) // checa se o valor passado está presente na coluna incrementando até 4 (col vale 1 na 1)
			return (0);
	}
	i = 1;
	while (i < 5)
	{
		if (board[row][i++] == val) // checa se o valor passado está presente na linha  incrementando até 4 (row vale 1 na 1)
			return (0);
	}
	return (1); // no caso do numero ser o unico na linha e coluna retorne true
}

int	solver_check_row(int **board, int row, int col) // ??
{
	if (col != 4) 
		return (1);
	if (!(check_row_left(board[row]) && check_row_right(board[row])))
	{
		board[row][col] = 0;
		return (0);
	}
	return (1);
}

int	solver_check_col(int **board, int row, int col) 
{
	if (row != 4) 
		return (1); 
	if (!(check_col_up(board[col]) && check_col_down(board[col]))) // a coluna foi solucionada em cima e em baixo?
	{
		board[row][col] = 0; 
		return (0); // se não foi solucionado a coluna retorne false e passe 0 para comecar novamente
	}
	return (1); // se foi solucionado a coluna retorne true
}

int	solver(int **board, int row, int col)
{
	int val;
	int r_row;
	int r_col;

	val = 1; // inicia o contador de valor em 1
	while (val <= 4) // o valor sera incrementado 4 vezes nesse loop
	{
		while (!is_safe(board, val, row, col) && val <= 4) // se já estiver presente na linha ou coluna, incremente até ser um valor possivel.
			val++;
		if (val > 4) // se o valor for maior que 4 retorne false
			return (0);
		board[row][col] = val; // a célula recebe o valor testado e seguro
		if (!solver_check_row(board, row, col) // se não passar no check de linha
		|| !solver_check_col(board, row, col)) // se nao passar no check de coluna
			return (0); // retorne erro
		if (row == 4 && col == 4) // apos chegar na ultima celula retorne true
			return (1);
		r_row = row + (col == 4); // chegando na ultima coluna incremente a linha
		r_col = (col == 4) ? 1 : col + 1; // chegando na ultima coluna volte para a primeira senao incremente
		if (solver(board, r_row, r_col)) // se for solucionado
			return (1); // retorne 1
		board[row][col] = 0; // senao coloque 0 na celula
		val++;
	}
	return (0);
}
