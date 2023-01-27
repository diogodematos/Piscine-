/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:10:56 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/09 10:25:58 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;
	int	b;

	a = nb;
	b = power;
	if (b < 0)
		return (0);
	if (b == 0)
		return (1);
	if (b == 1)
		return (a);
	while (b > 1)
	{
		a = a * nb;
		b--;
	}
	return (a);
}

/*int	main(void)
{
	printf("%d", ft_iterative_power(2, 0));
	return (0);
}*/
