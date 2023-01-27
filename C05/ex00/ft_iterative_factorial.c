/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:01:40 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/08 12:11:23 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	b;

	a = nb;
	b = a;
	if (a < 0)
		return (0);
	if (a == 0 || a == 1)
		return (1);
	else
	{
		while (a > 1)
		{
			b = b * (a -1);
			a--;
		}
	}
	return (b);
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
	return (0);
}*/
