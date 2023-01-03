/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:16:56 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/09/27 16:29:19 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
	{
		write (1, &str[s], 1);
		s++;
	}
}

/*int	main(void)
{
	ft_putstr("Porto");
	return (0);
}*/
