/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:50:08 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/28 15:08:08 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] > 96 && str[a] < 123)
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
	char	t[] = "khd";
	ft_str_is_lowercase(t);
	printf("%d", ft_str_is_lowercase(t));
}*/
