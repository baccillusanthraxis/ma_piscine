/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpalix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 10:41:51 by jpalix            #+#    #+#             */
/*   Updated: 2016/09/19 15:32:52 by jpalix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void aff_a(char *str)
{
	int i;

	i =0;
	while(str[i])
	{
		if(str[i] == 'a')
		{
			ft_putchar('a');
			ft_putchar('\n');
		}
		else
			ft_putchar('\n');
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	 if(argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	 else aff_a(argv[1]);
	return (0);
}
