/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step5_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-b <lpaulo-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:55:53 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/04/12 04:18:17 by lpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c) // imprime o caractere passado
{
	write(1, &c, 1);
}

void	error(void) // retorna erro
{
	write(1, "Error\n", 6);
}

void	print_board(int **board) // imprime o board
{
	int i; // contador da coluna
	int j; // contador da linha

	i = 1;
	j = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			ft_putchar(board[i][j++] + 48);
			if (j < 5)
				ft_putchar(' ');
		}
		i++;
		ft_putchar('\n');
	}
}

void	ft_putstr(char *str)// recebe um string e imprime todos os caracteres
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return ;
}

void	free_board(int **board) // desaloca a memoria / limpa o board
{
	int i;

	i = 0;
	while (i < 6)
		free(board[i++]);
	free(board);
}
