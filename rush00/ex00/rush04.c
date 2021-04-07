b/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-sou <rode-sou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 03:51:28 by rode-sou          #+#    #+#             */
/*   Updated: 2021/04/05 02:26:51 by rode-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_top(int length)
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

void	put_bottom(int length)
{
	int i;

	i = 1;
	while (i <= length)
	{
		if (i == 1)
			ft_putchar('C');
		else if (i < length)
			ft_putchar('B');
		else
			ft_putchar('A');
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
		if (j == 1)
			put_top(x);
		else if (j == y)
		{
			put_bottom(x);
		}
		else
			put_middle(x);
		j++;
	}
}
