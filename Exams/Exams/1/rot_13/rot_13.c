/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 11:36:41 by user42            #+#    #+#             */
/*   Updated: 2020/06/15 11:36:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot_13(char *str)
{
	int j;
	char i;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			i = str[j];
			i = i - 13;
			if (i < 97)
				i = (i + 123 - 97);
			ft_putchar(i);
			j++;
		}
		else if (str[j] >= 'A' && str[j] <= 'Z')
		{
			i = str[j];
			i = i + 13;
			if (i > 90)
				i = (i - 91) + 65;
			ft_putchar(i);
			j++;
		}
		else
		{
			ft_putchar(str[j]);
			j++;
		}
	}
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		argc = argc - 1;
		ft_rot_13(argv[argc]);
	}
	return (0);
}
