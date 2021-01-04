/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 11:36:45 by user42            #+#    #+#             */
/*   Updated: 2020/06/15 11:36:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rotone(char *str)
{
	int i;
	char j;

	i = 0;
	while (str[i] != '\0')
	{

		while ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
		{
			j = str[i];
			ft_putchar(j + 1);
			i++;
		}
		ft_putchar(str[i]);
		i++;
		if (str[i] == 'z')
		{
			ft_putchar('a');
			i++;
		}
		if (str[i] == 'Z')
		{
			ft_putchar('A');
			i++;
		}
	}
}


int main(int argc, char **argv)
{
	if (argc != 2 || argv[argc - 1][0] == '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_rotone(argv[argc - 1]);
	return (0);
}	
