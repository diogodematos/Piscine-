/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:27:41 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/27 12:32:32 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	sw;

	sw = *a;
	*a = *b;
	*b = sw;
}

/*int	main(void)
{
	int	c = 7;
	int	d = 25;

	ft_swap(&c, &d);
	printf("%d, %d", c, d);
	return (0);
}*/
