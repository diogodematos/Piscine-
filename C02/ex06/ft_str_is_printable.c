/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:28:09 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/28 16:23:38 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] > 31 && str[a] < 127)
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
	char	v[] = {65, 45, 150};
	ft_str_is_printable(v);
	printf("%d", ft_str_is_printable(v));
}*/
