/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 16:31:31 by pcluchet          #+#    #+#             */
/*   Updated: 2016/09/01 19:02:03 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char 	*ft_strrev(char *str)
{
	int longueur;
	int i;
	char target[256];

	i = 1;
	longueur = ft_strlen(str);
	
	while ( i < longueur)
	{
	target[i] = str[longueur-i];
	i++;
	}
	return (target);
}
