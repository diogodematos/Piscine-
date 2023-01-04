/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:13:17 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/29 17:58:07 by dcarrilh         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	ft_strlowcase(str);
	while (str[a] != '\0')
	{	
		if (a == 0)
		{
			if (str[a] > 96 && str[a] < 123)
				str[a] = str[a] - 32;
		}
		if (str[a - 1] < 48 || (str[a - 1] > 57 && str[a - 1] < 65)
			|| (str[a - 1] > 90 && str[a - 1] < 97) || str[a - 1] > 122)
		{
			if (str[a] > 96 && str[a] < 123)
			{
				str[a] = str[a] - 32;
			}	
		}
		a++;
	}
	return (str);
}

/*int	main(void)
{
	char	gt[] = {"oi, tudo        bem? 42palavras quare,ta-e-duas; cinquenta+e+um"};
	ft_strcapitalize(gt);
	printf("%s", ft_strcapitalize(gt));
}*/
