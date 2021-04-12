/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-b <lpaulo-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:56:12 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/04/12 18:06:19 by lpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "step1_views.h"
#include "step2_board.h"
#include "step3_solver.h"
#include "step5_print.h"

int	main(int argc, char **argv)
{
	int **board; // ponteiro board, onde as soluções serão inseridas.
	int *views; // cria o ponteiro de views que são as pistas para solucionar o problema.
	int result; // onde será salvo nosso board solucionado

	if (argc != 2) // se não houver argumento retorne erro
	{
		error();
		return (0);
	}
	views = check_argv(argv[1]); // as pistas são inseridas na variavel view
	if (views == 0) // se for zero retorne erro
		return (0);
	board = initialize_board(views); // cria a matriz board 6x6 com as pistas nas extremidades
	result = solver(board, 1, 1); 
	if (board == 0 || result == 0)
	{
		error();
		return (0);
	}
	print_board(board); // imprime o board
	free_board(board); // desaloca a memoria de board
	free(views); // desaloca a memoria de views
	return (0);
}
