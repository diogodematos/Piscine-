/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:26:15 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/28 17:02:41 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] > 96) && (str[a] < 123))
		{
			str[a] = str[a] - 32;
			a++;
		}
		else
		{
			a++;
		}
	}
	return (str);
}

/*int	main(void)
{
	char	ty[] = {39, 52, 100, 105};
	ft_strupcase(ty);
	printf("%s", ft_strupcase(ty));
}*/
