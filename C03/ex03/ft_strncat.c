/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:10:57 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/04 16:13:15 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat( char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	i = 0;
	while (dest[a] != '\0')
	{
		dest[a] = dest[a];
		a++;
	}
	while (i < nb && src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
		i++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int    main(void)
{
    char    ki[50] = "7";
    char    str[50] = "dequatro";

    printf("minha funcao:%s\n", ft_strncat(ki, str, 1));
        char    ki1[50] = "7";
    char    str1[50] = "dequatro";
    
    printf("real g:%s", strncat(ki1, str1, 1));
    
}*/
