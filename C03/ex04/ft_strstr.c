/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:35:34 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/04 16:37:08 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (to_find[b] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		if (str[a] == to_find[b])
		{
			while (str[a] == to_find[b] && to_find[b] != '\0')
			{
				a++;
				b++;
			}
			if (str[a] != to_find[b] && to_find[b] != '\0')
				return (0);
			return (str + (a - b));
		}
		a++;
	}
	return (0);
}

/*int    main(void)
{
    char    ki[] = "amanha de manha";
    char    str[] = "ni";

    printf("minha funcao:%s\n", ft_strstr(ki, str));
    char    ki1[] = "amanha de manha";
    char    str1[] = "ni";
    
    printf("real g:%s", strstr(ki1, str1));
}*/
