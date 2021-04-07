/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-b <lpaulo-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 05:44:41 by lpaulo-b          #+#    #+#             */
/*   Updated: 2021/04/04 06:04:50 by lpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char first;
	char second;

	first = 0;
	second = 0;
	while (first < 100)
	{
		second = first + 1;
		while (second < 100)
		{
			ft_putchar(first / 10 + '0');
			ft_putchar(first % 10 + '0');
			ft_putchar(' ');
			ft_putchar(second / 10 + '0');
			ft_putchar(second % 10 + '0');
			if ((first / 10 != 9) || (first % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second++;
		}
		first++;
	}
}
