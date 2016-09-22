/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpalix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:34:18 by jpalix            #+#    #+#             */
/*   Updated: 2016/09/19 17:01:58 by jpalix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(i);
		i++;
	}
}


int		main(int argc, char **argv)
{
	int i;

	if(argc > 1)
	{
		ft_putstr(argv[argc-1]);
		ft_putchar('\n');
	}
		return(0);
}
