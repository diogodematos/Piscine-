/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:59:39 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/25 09:59:44 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comb(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			ft_comb((char)(a / 10) + 48);
			ft_comb((char)(a % 10) + 48);
			ft_comb(' ');
			ft_comb((char)(b / 10) + 48);
			ft_comb((char)(b % 10) + 48);
			if ((a != 98))
			{
				ft_comb (',');
				ft_comb (' ');
			}
		}
	}
}
