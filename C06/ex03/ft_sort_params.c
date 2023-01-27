/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:17:10 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/12 08:36:34 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *gt)
{
	int	a;

	a = 0;
	while (gt[a])
	{
		write(1, &gt[a], 1);
		a++;
	}
}

int	ft_strcmp(char *bg, char *gf)
{
	int	a;

	a = 0;
	while (bg[a] != '\0' && gf[a] != '\0' && bg[a] == gf[a])
		a++;
	return (bg[a] - gf[a]);
}

void	ft_swap(char **tb, char **pl)
{
	char	*temp;

	if (ft_strcmp(*tb, *pl) > 0)
	{
			temp = *tb;
			*tb = *pl;
			*pl = temp;
	}
}

int	main(int ac, char **av)
{
	int	a;
	int	b;

	b = 1;
	while (b < ac -1)
	{
		a = 1;
		while (a < ac -1)
		{
			ft_swap(&av[a], &av[a +1]);
			a++;
		}
		b++;
	}
	b = 1;
	while (b < ac)
	{
		ft_putstr(av[b]);
		write(1, "\n", 1);
		b++;
	}
	return (0);
}
