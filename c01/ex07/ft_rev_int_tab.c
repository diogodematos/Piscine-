/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:19:09 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/27 10:43:08 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	pon;

	a = 0;
	b = (size -1);
	pon = 666;
	while (a != (size / 2))
	{
		pon = tab[a];
		tab[a] = tab[b];
		tab[b] = pon;
		a++;
		b--;
	}
}

/*int	main(void)
{
	int	tab[] = {15,25,35};
	int	n = 3;

	ft_rev_int_tab (tab, n);
	printf ("%d, %d, %d", tab[0], tab[1], tab[2]);
	return (0);
}*/
