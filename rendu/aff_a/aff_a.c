/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 04:18:32 by maparmar          #+#    #+#             */
/*   Updated: 2021/09/22 21:18:41 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac != 2)
		write(1, "a\n", 2);
	else
	{
		while (av[1][i])
		{
			if (av[1][i] != 'a')
				i++;
			else
			{
				write(1, "z", 1);
				break;
			}
		}
		write(1, "\n", 1);
	}
	return (0);
}
