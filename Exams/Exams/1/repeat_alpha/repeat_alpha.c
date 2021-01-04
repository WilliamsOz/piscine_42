/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 17:31:14 by user42            #+#    #+#             */
/*   Updated: 2020/06/09 18:17:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_repeat_alpha(char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		if ((argv[1][i] >= 'a' && argv[1][i] <= 'z'))
		{
			j = argv[1][i] - 97;
			while (j-- >= 0)
				ft_putchar(argv[1][i]);
		}
		else if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
		{
			j = argv[1][i] - 65;
			while (j-- >= 0)
				ft_putchar(argv[1][i]);
		}
		else
			ft_putchar(argv[1][i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_repeat_alpha(argv);
	ft_putchar('\n');
	return (0);
}
