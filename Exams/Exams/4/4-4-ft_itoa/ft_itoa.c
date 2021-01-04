/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:35:50 by user42            #+#    #+#             */
/*   Updated: 2020/07/01 14:35:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_itoa (int nbr)
{
	int n;
	int i;
	int len;
	int rem;
	char *str;

	i = 0;
	len = 0;
	n = nbr;
	if (nbr < 0) /*---On verifie si le nombre est negatif---*/
	{
		nbr = nbr * -1;
		len = 1;
	}
	while (n != 0) /*---On compte le nombre d'elements que va contenir str en divisant n(=nbr) par 10---*/
	{
		i++;
		n = n/10;
	}
	str = (char*)malloc(sizeof(char) * (i + len) + 1); /*---Permet de malloc la string en fonction du signe(len)---*/
	if (len == 1) /*---Si nbr est negatif on met le signe negatif en premier dans str et le '\0' a la fin de str---*/
	{
		str[0] = '-';
		str[i + 1] = '\0';
	}
	else
		str[i] = '\0'; /*---Sinon si nbr est positif, on met seulement le '\0' a la fin de str---*/
	if (len == 1) /*---Dans le cas ou nbr est negatif---*/
	{
		while (i > 0) 
		{
			rem = nbr % 10; /*---pt1 : Permet de retenir le nombre et de le stocker avec la pt2---*/
			nbr = nbr / 10; /*---Permet de se deplacer vers la gauche---*/
			str[i] = rem + '0'; /*---ptr 2 : Permet de stocker le nombre dans la string---*/
			i--;
		}
	}
	else if (len == 0) /*---Dans le cas ou nbr est positif---*/
	{
		while (i > 0)
		{
			rem = nbr % 10; /*---pt1 : Permet de retenir le nombre et de le stocker avec la pt2---*/
			nbr = nbr / 10; /*---Permet de se deplacer vers la gauche---*/
			str[i - 1] = rem + '0'; /*---ptr 2 : Permet de stocker le nombre dans la string---*/
			i--;
		}
	}
	printf("%s\n", str);
	return (str);
}

int main(void)
{
	int nbr;

	nbr = -1555555;
	ft_itoa(nbr);
	return (0);
}