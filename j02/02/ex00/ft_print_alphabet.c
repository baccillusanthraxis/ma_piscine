/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 14:51:12 by pcluchet          #+#    #+#             */
/*   Updated: 2016/08/31 15:06:32 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;
	int		i;

	i = 97;
	while (i <= 122)
	{
		c = i;
		ft_putchar(c);
		i++;
	}
}
