/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:25:12 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/09 12:09:35 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	a;
	long	b;

	a = nb;
	b = 1;
	if (a <= 0)
		return (0);
	if (a == 1)
		return (1);
	while (b * b <= a)
	{
		if (b * b == nb)
			return (b);
		b++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_sqrt(10000));
	return (0);
}*/
