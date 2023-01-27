/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:37:00 by dcarrilh          #+#    #+#             */
/*   Updated: 2022/10/03 14:37:04 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 32 || str[a] > 126)
		{
			write(1, "\\", 1);
			write(1, &("0123456789abcdef"[str[a] / 16]), 1);
			write(1, &("0123456789abcdef"[str[a] % 16]), 1);
		}
		else
			write(1, &str[a], 1);
		a++;
	}
}

/*int	main(void)
{
	char	gt[] = {10, 65, 23, 200};
	ft_putstr_non_printable(gt);
	return (0);
}*/
