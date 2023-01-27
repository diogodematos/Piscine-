/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:21:41 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/10 12:30:05 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char *bg)
{
	int	a;

	a = 0;
	while (bg[a])
	{
		write (1, &bg[a], 1);
		a++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 0)
		ft_putchar(av[0]);
	write (1, "\n", 1);
}
