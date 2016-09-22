/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpalix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 13:36:33 by jpalix            #+#    #+#             */
/*   Updated: 2016/09/22 12:01:11 by jpalix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_replace(char *s1, char ag2, char ag3)
{
	int i;

	i = 0;
	while(s1[i] != '\0')
	{
		if(s1[i] == ag2)
			ft_putchar(ag3);
		else
			ft_putchar(s1[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		ft_replace(argv[1], argv[2][0], argv[3][0]);
	}
	ft_putchar('\n');
	return(0);
}
