/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 21:25:59 by pcluchet          #+#    #+#             */
/*   Updated: 2016/09/01 22:20:16 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	disp_this_with_a_fucking_zero(int a)
{
	char	d1;
	char	d2;
	int		dizaines;
	int		unites;

	unites = a % 10;
	dizaines = (a - unites) / 10;
	d1 = dizaines + 48;
	d2 = unites + 48;
	ft_putchar(d1);
	ft_putchar(d2);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i <= 99)
	{
		while (j <= 99)
		{
			if (i < j)
			{
				disp_this_with_a_fucking_zero(i);
				ft_putchar(' ');
				disp_this_with_a_fucking_zero(j);
				if (i + j != 197)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
}
