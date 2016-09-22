/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpalix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 12:35:00 by jpalix            #+#    #+#             */
/*   Updated: 2016/09/19 13:04:47 by jpalix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		ft_putchar(i);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while(argv)
	{
		if(argc <1)
		{
			write(1, "\n", 1);
			return(0);
		}
		else
		{
			ft_putstr(argv[argc -1]);
			write(1, "\n", 1);
			return (0);
		}
	i++;
	}
}
