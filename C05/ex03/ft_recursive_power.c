/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:16:57 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/09 10:42:50 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	a;
	int	b;
	int	c;

	a = nb;
	b = power;
	c = 0;
	if (b == 0)
		return (1);
	if (b == 1)
		return (a);
	if (b > 1)
		c = a * ft_recursive_power(a, b -1);
	else
		return (0);
	return (c);
}

/*int	main(void)
{
	printf("%d", ft_recursive_power(-5, 5));
	return (0);
}*/
