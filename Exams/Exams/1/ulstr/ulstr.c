/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 11:36:50 by user42            #+#    #+#             */
/*   Updated: 2020/06/15 11:36:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ulstr(char *str)
{
	int i;
	char j;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				j = str[i];
				ft_putchar(j - 32); 
				i++;
			}
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				j = str[i];
				ft_putchar(j + 32);
				i++;
			}
		}
		if (str[i] != '\0')
		{
			j = str[i];
			ft_putchar(j);
			i++;
		}	
	}
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	if (argc != 2 || argv[argc - 1][0] == '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_ulstr(argv[argc - 1]);
	return (0);
}
