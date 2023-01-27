/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:28:40 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/06 18:04:42 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	dlen;
	unsigned int	slen;

	a = 0;
	b = 0;
	dlen = 0;
	slen = ft_strlen(src);
	while (dest[a] != '\0' && size > 0)
	{
		a++;
		dlen++;
		size--;
	}
	while (src[b] != '\0' && size-- > 1)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	if (size == 1 || src[b] == 0)
		dest[a] = '\0';
	return (slen + dlen);
}

/*int    main(void)
{
    char    ki[100] = "abc";
    char    str[100] = "efgh";
    printf("%d, %s\n", ft_strlcat(ki, str, 13), ki);
}*/
