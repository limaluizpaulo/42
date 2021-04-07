/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-b <lpaulo-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 08:05:10 by lpaulo-b          #+#    #+#             */
/*   Updated: 2021/04/05 15:23:03 by lpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_top_or_bottom(int length)
{
	int i;

	i = 1;
	while (i <= length)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i < length)
			ft_putchar('B');
		else
			ft_putchar('C');
		i++;
	}
	ft_putchar('\n');
}

void	put_middle(int length)
{
	int i;

	i = 1;
	while (i <= length)
	{
		if (i == 1 || i == length)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int j;

	j = 1;
	while (j <= y)
	{
		if (j == 1 || j == y)
			put_top_or_bottom(x);
		else
			put_middle(x);
		j++;
	}
}
