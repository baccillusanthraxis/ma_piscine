/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 15:58:57 by pcluchet          #+#    #+#             */
/*   Updated: 2016/08/31 21:14:23 by pcluchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	put_fin_ligne(int i)
{
	if (i != 168)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	set_my_shit_up(char *a, char *b, char *c)
{
	*a = '0';
	*b = '1';
	*c = '2';
}

void	disp(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	put_fin_ligne(a + b + c);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	set_my_shit_up(&a, &b, &c);
	while (a + b + c < 168)
	{
		while (b != 58)
		{
			while (c != 58)
			{
				if (a < b && b < c)
				{
					disp(a, b, c);
				}
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}
