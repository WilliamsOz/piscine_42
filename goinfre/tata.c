/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tata.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:41:14 by wiozsert          #+#    #+#             */
/*   Updated: 2020/08/10 16:42:32 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		ft_strlen(char *str)
{
	int		i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}
int		check_base(char *base)
{
	int		i;
	int		j;
	i = 0;
	if (!(*base))
		return (0);
	while (base[i])
	{
		if (base[i] == ‘-’ || base[i] == ‘+’)
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_place_in_base(char nb, char *base)
{
	int i;
	i = 0;
	while (base[i])
	{
		if (nb == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int resultat;
	int signe;
	int len_base;
	int place;
	i = 0;
	resultat = 0;
	signe = 0;
	len_base = ft_strlen(base);
	if (!(check_base(base)))
		return (0);
	while (str[i] == ‘-’ || str[i] == ‘+’)
	{
		if (str[i] == ‘-’)
			signe++;
		i++;
	}
	signe = ((signe % 2) ? -1 : 1);
	while ((place = ft_place_in_base(str[i], base)) >= 0)
	{
		resultat = resultat * len_base + place;
		i++;
	}
	return (resultat * signe);
}

int main()
{
	printf("%d\n", ft_atoi_base("--+1010","011"));
	return (0);
}*/