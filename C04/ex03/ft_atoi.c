/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:06:37 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/07 12:06:59 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_sign(char *str)
{
	int	s;
	int	a;

	s = 0;
	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < 48 || str[a] > 57) && (str[a] < 9
				|| str[a] > 13) && str[a] != 32 && str[a] != 43 && str[a] != 45)
			return (0);
		else
		{
			while ((str[a] > 8 && str[a] < 14) || str[a] == 32)
				a++;
			while (str[a] == 43 || str[a] == 45)
			{
				if (str[a] == 45)
					s++;
				a++;
			}
			return (s);
		}
	}
	return (s);
}

int	ft_atoi(char *str)
{
	int	b;
	int	a;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		while ((str[a] > 8 && str[a] < 14) || str[a] == 32)
			a++;
		while (str[a] == 43 || str[a] == 45)
			a++;
		while (str[a] > 47 && str[a] < 58)
			b = b * 10 + str[a++] - 48;
		if (ft_sign(str) % 2 == 0)
			return (b);
		else
			return (-b);
	}
	return (0);
}

/*int main(void)
{
  char  gt[] = "  ---+- -+123ab4567";
  printf("%d\n", ft_atoi(gt));
}*/
