/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:54:47 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/10 14:56:30 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char *ac)
{
	int	a;

	a = 0;
	while (ac[a])
	{
		write(1, &ac[a], 1);
		a++;
	}
}

int	main(int ac, char **av)
{
	int	a;

	a = ac - 1;
	if (ac != '\0')
	{
		while (av[a] != av[0])
		{
			ft_putchar(av[a]);
			write (1, "\n", 1);
			a--;
		}
	}
	return (0);
}
