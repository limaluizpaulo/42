/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step2_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-b <lpaulo-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:00:00 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/04/12 22:12:18 by lpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	init_columns(int **board, int *vals) // preenche as colunas com as dicas
{
	int i;
	int mode;

	mode = 0;
	while (mode < 2) // valida apenas a primeira e a ulima coluna
	{
		i = 1;
		while (i < 5)
		{
			board[mode * 5][i] = vals[mode * 4 + i - 1];
			i++;
		}
		mode++;
	}
}

void	init_rows(int **board, int *vals) // preenche as linhas com as dicas
{
	int i;
	int mode;
	
	mode = 0;
	while (mode < 2)
	{
		i = 1;
		while (i < 5)
		{
			board[i][mode * 5] = vals[(mode + 2) * 4 + i - 1];
			i++;
		}
		mode++;
	}
}

int		**initialize_board(int *vals) // cria a matriz board 6x6 vazia
{
	int i;
	int j;
	int **board;

	i = 0;
	j = 0;
	board = malloc(sizeof(*board) * 6); // aloca 6 espaço na memoria para array board
	if (!board) // se o board estiver vazio retorne erro
		return (0);
	while (i < 6)
	{
		j = 0;
		board[i] = malloc(sizeof(**board) * 6); // criar matriz,alocar memoria para 6 colunas. 
		while (j < 6)
		{
			board[i][j] = 0; //preenche com zero todo o board
			j++;
		}
		i++;
	}
	init_columns(board, vals); // função que preenche as dicas nas colunas
	init_rows(board, vals); // função que preenche as dicas nas linhas
	return (board); // retorna a matriz board pronta
}
