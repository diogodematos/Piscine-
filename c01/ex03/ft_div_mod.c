/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:41:10 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/27 12:38:24 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b > 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	c = 10;
	int	d = 2;

	ft_div_mod(82, 2, &c, &d);
	printf("%d, %d", c, d);
	return (0);
}*/
