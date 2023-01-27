/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:43:14 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/29 15:29:35 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((s1[a] != '\0' || s2[a] != '\0') && a < n)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}

/*int	main(void)
{
	char	cd[] = "amanha";
	char	gt[] = "amanh";
	printf("%d\n", ft_strncmp(cd, gt, 5));
	char	cd1[] = "amanha";
	char	gt1[] = "amanh";
	printf("%d", strncmp(cd1, gt1, 5));
}*/
