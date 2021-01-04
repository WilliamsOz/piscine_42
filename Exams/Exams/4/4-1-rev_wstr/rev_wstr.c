/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:31:12 by user42            #+#    #+#             */
/*   Updated: 2020/07/01 18:57:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_wstr(char *str)
{
	int i;
	int j;
	char *new_str;
	char *temp_str;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	temp_str = str;
	new_str = (char*)malloc(sizeof(char) * (len + 1));
	str = (char*)malloc(sizeof(char) * (len + 1));
	str = temp_str;
	new_str[len] = '\0';
	str[len] = '\0';
	i = len;
	while (len > 0)
	{
		while (str[i] == ' ')
			i--;
		while ((str[i] >= 'a' && str[i] <= 'z') 
			|| ((str[i] >= 'A' && str[i] <= 'Z') && (i > 0)))
			i--;
		i++;
		while (str[i] != ' ' && str[i] != '\0')
		{
			new_str[j] = str[i];
			str[i] = ' ';
			j++;
			i++;
			len--;
		}
		new_str[j] = ' ';
	}
	printf("%s\n", str);
	printf("%s\n", new_str);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_rev_wstr(av[ac - 1]);
	return (0);
}
