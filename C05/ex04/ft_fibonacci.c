/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:50:01 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/09 11:13:15 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	a;

	a = index;
	if (a < 0)
		return (-1);
	if (a <= 1)
		return (a);
	return (ft_fibonacci (a - 1) + ft_fibonacci(a - 2));
}

/*int	main(void)
{
	printf("%d", ft_fibonacci(10));
	return (0);
}*/
