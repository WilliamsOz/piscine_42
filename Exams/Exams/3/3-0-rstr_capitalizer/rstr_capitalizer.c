/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:26:49 by user42            #+#    #+#             */
/*   Updated: 2020/06/22 16:26:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rstr_capitalizer(int ac, char **tab)
{
	int i;
	int j;
	int temp;

	i = 1;
	j = 0;
	temp = ac;
	while (ac != 1)
	{
		while (tab[i][j] != '\0')
		{
			if (tab[i][j] >= 'A' && tab[i][j] <= 'Z')
				tab[i][j] = tab[i][j] + 32;
			j++;
		}
		ac--;
		i++;
		j = 0;
	}
	ac = temp;
	i = 1;
	while (ac != 1)
	{
		while (tab[i][j] != '\0')
		{
			if (tab[i][0] == ' ')
				while(tab[i][j] == ' ')
					j++;
			if ((tab[i][j + 1] == '\0' || tab[i][j + 1] == ' ') && (tab[i][j] >= 'a' &&
			tab[i][j] <= 'z'))
				tab[i][j] = tab[i][j] - 32;
			j++;
		}
		ac--;
		i++;
		j = 0;
	}
	ac = temp;
	i = 1;
	while (ac != 1)
	{
		while (tab[i][j] != '\0')
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		i++;
		ac--;
		j = 0;
		ft_putchar('\n');
	}
}

int main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_rstr_capitalizer(ac, av);
	return (0);
}
