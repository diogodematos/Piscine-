/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:04:04 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/28 17:10:32 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] > 64) && (str[a] < 91))
		{
			str[a] = str[a] + 32;
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
	char	mj[] = {"uih5VH"};
	ft_strlowcase (mj);
	printf("%s", ft_strlowcase(mj));
}*/
