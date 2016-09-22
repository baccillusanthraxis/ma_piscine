/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   essai_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpalix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:51:08 by jpalix            #+#    #+#             */
/*   Updated: 2016/09/22 13:57:14 by jpalix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	replace(char *str, char s2, char s3)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == s2)
			ft_putchar(s3);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 4)
		replace(argv[1], argv[2][0], argv[3][0]);
	ft_putchar('\n');
	return(0);
}

