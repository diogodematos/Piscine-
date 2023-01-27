/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:49:26 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/27 16:23:27 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	pon;

	a = 0;
	while (a < (size - 1))
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				pon = tab[a];
				tab[a] = tab[b];
				tab[b] = pon;
			}
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	int	tab[] = {25, 45, 23, 75};
	int	size = 4;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}*/
