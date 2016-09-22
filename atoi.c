/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpalix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 16:25:20 by jpalix            #+#    #+#             */
/*   Updated: 2016/09/22 17:26:02 by jpalix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int signe;
	int resultat;

	signe = 1;
	i =0;
	while (str[i] < 33)
		i++;
	if (str[i] == '-')
		signe = -1;
	if (str[i] == '-' || str[i] == '+')
		str[i]++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10  + str[i]  - '0';
		i++;
	}
	return (resultat * signe);
}

int main()
{
	
	write (1, ft_atoi("12345"), 5);
	return (0);
}
