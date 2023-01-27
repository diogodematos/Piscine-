/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:09:00 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/28 18:47:25 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] > 64) && (str[a] < 91))
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
	char	gt[] = {69, 58, 75};
	ft_str_is_uppercase(gt);
	printf("%d", ft_str_is_uppercase(gt));
}*/
