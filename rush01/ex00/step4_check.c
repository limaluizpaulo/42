/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step4_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-b <lpaulo-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 19:39:13 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/04/12 12:35:21 by lpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_left(int *row) // checa os valores a esquerda
{
	int i;
	int max;
	int count;

	i = 1; 
	max = 0; 
	count = 0;
	while (i < 5) 
	{
		if (row[i] > max) 
		{
			max = row[i]; 
			count++; 
		}
		i++;
	}
	return (1);
}

int	check_row_right(int *row)
{
	int i; // inicia o contador i em 1
	int max; // maior valor a esquerda
	int count;

	i = 4;
	max = 0;
	count = 0;
	while (i > 0) // confere todos os itens da linha da dir para esq
	{
		if (row[i] > max) // se o predio verificado for maior que o maior da linha acione o contador de vista
		{
			max = row[i]; // se o item for maior que o maior. salve na variavel max para ser comparado
			count++; // temos uma nova vista incremete!
		}
		i--; 
	}
	if (count != row[5]) // se as vistas contadas forem diferente da pista retorne erro
		return (0);
	return (1); // se não tá tudo beleza!
}

int	check_col_up(int *col)
{
	int i;
	int max;
	int count;

	i = 1;
	max = 0;
	count = 0;
	while (i < 5)
	{
		if (col[i] > max)
		{
			max = col[i];
			count++;
		}
		i++;
	}
	if (count != col[0])
		return (0);
	return (1);
}

int	check_col_down(int *col)
{
	int i;
	int max;
	int count;

	i = 4;
	max = 0;
	count = 0;
	while (i > 0)
	{
		if (col[i] > max)
		{
			max = col[i];
			count++;
		}
		i--;
	}
	if (count != col[5])
		return (0);
	return (1);
}

