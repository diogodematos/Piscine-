/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:23:01 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/28 18:46:12 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] > 47 && str[a] < 57)
			a++;
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main(void)
{
	char	g[] = " 865378";
	printf("%d", ft_str_is_numeric(g));
}*/
