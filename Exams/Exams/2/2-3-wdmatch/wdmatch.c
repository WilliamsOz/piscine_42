/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 20:21:01 by angavrel          #+#    #+#             */
/*   Updated: 2020/06/17 16:30:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_wdmatch(char *s1, char *s2)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == s1[j])
			j++;
		if (s1[j] == '\0')
		{
			j = 0;
			while (s1[j] != '\0')
			{
				ft_putchar(s1[j]);
				j++;
			}
		}
		i++;
	}
	ft_putchar('\n');
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_wdmatch(av[ac - 2], av[ac - 1]);
	return (0);
}
