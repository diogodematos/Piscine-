/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 08:14:13 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/10 08:18:08 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	a;
	long	b;

	a = nb;
	b = 2;
	if (nb <= 1)
		return (0);
	while (b <= a / b)
	{
		if (a % b == 0)
			return (0);
		b++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

/*int	main(void)
{
	printf("%d", ft_find_next_prime(10000356));
	return (0);
}*/
