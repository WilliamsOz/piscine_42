/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:19:00 by user42            #+#    #+#             */
/*   Updated: 2020/06/22 16:19:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hidenp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((s2[j] != '\0' && s1[i] != '\0') && s1[0] != '\0')
	{
		if (s2[j] == s1[i])
			i++;
		if (s1[i] == '\0' || s1[0] == '\0')
		{
				ft_putchar('1');
		}
		j++;
	}
	if (s2[j] == '\0' && s1[i] != '\0')
		ft_putchar('0');
	if (s1[0] == '\0')
		ft_putchar('1');
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
		ft_hidenp(av[ac -2], av[ac - 1]);
	return (0);
}
