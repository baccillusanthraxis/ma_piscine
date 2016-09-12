/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 11:54:46 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/04 17:59:04 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print_firstline(int x, char *tab)
{
	int i;

	i = 0;
	ft_putchar(tab[0]);
	while (i < x - 2)
	{
		ft_putchar(tab[4]);
		i++;
	}
	ft_putchar(tab[1]);
	ft_putchar('\n');
}

void		ft_print_middle(int x, int y, char *tab)
{
	int i;
	int j;

	i = 0;
	while (i < y - 2)
	{
		ft_putchar(tab[5]);
		j = 0;
		while (j < x - 2)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar(tab[5]);
		ft_putchar('\n');
		i++;
	}
}

void		ft_print_lastline(int x, char *tab)
{
	int i;

	i = 0;
	ft_putchar(tab[2]);
	while (i < x - 2)
	{
		ft_putchar(tab[4]);
		i++;
	}
	ft_putchar(tab[3]);
	ft_putchar('\n');
}

int			ft_singularity(int x, int y, char *tab)
{
	int i;

	i = 0;
	if (x <= 0 || y <= 0)
		return (0);
	if (y == 1)
		ft_print_firstline(x, tab);
	if (x == 1 && y > 1)
	{
		ft_putchar(tab[0]);
		ft_putchar('\n');
		while (i < y - 2)
		{
			ft_putchar(tab[5]);
			ft_putchar('\n');
			i++;
		}
		ft_putchar(tab[2]);
		ft_putchar('\n');
	}
	return (0);
}

int			colle(int x, int y)
{
	char tab[7];

	tab = "AACCBB\0";
	if (x <= 1 || y < 2)
	{
		ft_singularity(x, y, tab);
		return (0);
	}
	if (x <= 2147483647 && y <= 2147483647)
	{
		ft_print_firstline(x, tab);
		ft_print_middle(x, y, tab);
		ft_print_lastline(x, tab);
	}
	return (0);
}
