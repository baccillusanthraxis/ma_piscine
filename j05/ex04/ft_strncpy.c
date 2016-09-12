/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpalix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:31:03 by jpalix            #+#    #+#             */
/*   Updated: 2016/09/06 22:41:13 by jpalix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src, unsigned int n)
{
	int s;

	n = 8;
	s = 0;
	while (src[s] != '\0')
	{
		if (s < n)
			dest[s] = src[s];
		s++;
	}
	return (dest);
}