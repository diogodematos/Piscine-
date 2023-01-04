/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:43:51 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/28 18:44:34 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((64 < str[a] && str[a] < 91) || (96 < str[a] && str[a] < 123))
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
	char	hy[] = "fdg";

	ft_str_is_alpha(hy);
	printf("%d", ft_str_is_alpha(hy));
}*/
