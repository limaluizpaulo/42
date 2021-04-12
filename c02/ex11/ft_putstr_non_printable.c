/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-b <lpaulo-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:28:28 by lpaulo-b          #+#    #+#             */
/*   Updated: 2021/04/09 00:30:03 by lpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

int		is_no_printable(unsigned char c)
{
	if (c < 32 || c > 126)
		return (1);
	else
		return (0);
}

void	convert_to_hex(unsigned char c)
{
	char *hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[(unsigned char)c / 16]);
	ft_putchar(hex[(unsigned char)c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (is_no_printable((unsigned char)*str))
			convert_to_hex((unsigned char)*str);
		else
			ft_putchar((unsigned char)*str);
		str++;
	}
}
