/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:13:17 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/09 12:29:30 by dcarrilh         ###   ########.fr       */
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

/*int	main(void)
{
	printf("%d", ft_is_prime(10000000));
}*/
