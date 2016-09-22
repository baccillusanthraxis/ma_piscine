/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpalix <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 09:15:33 by jpalix            #+#    #+#             */
/*   Updated: 2016/09/21 09:50:19 by jpalix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int aff_a(char *str)
{
	int i;
	int res;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == 97)
			res = 1;
		i++;
	}
	if (res == 1)
	{
		write(1, "a", 1);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return(0);
}

int main(int argc, char **argv)
{
	int tmp;

	
	if(argc != 2)
		write(1, "a\n", 3);
	else
		aff_a(argv[1]);

}
