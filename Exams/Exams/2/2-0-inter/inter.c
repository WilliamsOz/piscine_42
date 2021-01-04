/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 16:28:43 by fwuensch          #+#    #+#             */
/*   Updated: 2020/06/17 16:25:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_inter(char *s1, char *s2)
{
	char tab[127];
	int i;
	int j;
	int verif;
		
	i = 0;
	j = 0;
	verif = 0;
	while (i < 127)
	{
		tab[i] = 0;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		verif = s2[i];
		if (tab[verif] == 0)
			tab[verif] = 1;
		i++;
	}
	i = 0;
	while (s1[i] != '\0')
	{
		verif = s1[i];
		if (tab[verif] == 1)
		{
			ft_putchar(s1[i]);
			tab[verif] = 2;
		}
		i++;
	}
	ft_putchar ('\n');
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_inter(av[ac - 2], av[ac - 1]);
	return (0);
}
