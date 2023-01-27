/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:52:26 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/08 17:02:28 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	a;
	int	b;

	a = nb;
	b = a;
	if (a < 0)
		return (0);
	if (a == 0 || a == 1)
		return (1);
	if (a > 1)
		b = b * (ft_recursive_factorial(a -1));
	return (b);
}

/*int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return (0);
}*/
