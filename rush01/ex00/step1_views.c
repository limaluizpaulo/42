/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step1_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-b <lpaulo-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:33:57 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/04/12 18:08:44 by lpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*error_null(void) // função que retorna o erro null
{
	write(1, "Error\n", 6);
	return (0);
}

int	*check_argv(char *arg) // checa as pistas e cria o tab
{
	int i;
	int j;
	int *tab; 

	tab = malloc(16 * sizeof(int)); // aloca memoria para 16 inteiros no array tab
	if (!tab || !arg) // retorna erro se não houver valores passados
		return (error_null());
	j = 0;
	i = 0;
	while (arg[i] != '\0') // leia o argumento até terminar a linha
	{
		if (!(i % 2 == 0 && arg[i] >= '1' && arg[i] <= '4') // se os pares não estão entre 1 e 4
			&& !(i % 2 == 1 && arg[i] == ' ')) // se os impares não são os espaços
			return (error_null());
		if (i % 2 == 0) 
		{
			tab[j] = arg[i] - 48; // tab recebe os valores do arg convertidos em inteiro
			j++;
		}
		i++;
	}
	if (i != 31) // se o contador não chegar a 31
		return (error_null());
	return (tab); // retorna tab 
}
