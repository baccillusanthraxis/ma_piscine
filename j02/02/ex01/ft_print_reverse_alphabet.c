/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 15:16:11 by pcluchet          #+#    #+#             */
/*   Updated: 2016/08/31 15:20:37 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	c;
	int		i;

	i = 122;
	while (i >= 97)
	{
		c = i;
		ft_putchar(c);
		i--;
	}
}
