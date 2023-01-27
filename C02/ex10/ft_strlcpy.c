/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:21:23 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/02 13:20:06 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != ('\0'))
	{
		a++;
	}
	return (a);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest [i] = src [i];
			i++;
		}
		dest [i] = '\0';
	}
	return (ft_strlen(src));
}

int	main(void)
{
	char	gt[18] = "";
	char 	mi[] = "gfsufsuifhsuhs";

	printf ("%d, %s", ft_strlcpy(gt, mi, 5), gt);
	
	printf ("%d, %s", strlcpy(gt, mi, 5), gt);
	return (0);
}
