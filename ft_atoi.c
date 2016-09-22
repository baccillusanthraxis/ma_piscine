/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpalix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 16:40:44 by jpalix            #+#    #+#             */
/*   Updated: 2016/09/18 18:06:46 by jpalix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	i;
	int	j;
	int	signe;

	signe = 0;
	i = 0;
	j = 0;
	if (!str)
		return (0);
	while (str[i] >= '\b' && str[i] <= '\r')
		i++;
	(str[i] == '-' ? i++ : signe++);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			j = j * 10 + (str[i] - '0');
		}
		else
			return ((signe == 0 ? -j : j));
		i++;
	}
	return ((signe == 0 ? -j : j));
}
