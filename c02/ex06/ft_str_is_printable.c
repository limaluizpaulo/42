/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-b <lpaulo-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 10:53:43 by lpaulo-b          #+#    #+#             */
/*   Updated: 2021/04/08 10:53:45 by lpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 32) || (str[c] > 126))
			return (0);
		c++;
	}
	return (1);
}