/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HTprint_combn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 14:44:22 by wiozsert          #+#    #+#             */
/*   Updated: 2020/08/05 16:45:44 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print(int *range, int n)
{
	int	i;

	i = 1;
	while (i < n)				// On parcours le tableau afin de verifier que les valeurs sont correct et que i est < a i + 1 pour faciliter laffichage
	{			
		if (range[i - 1] >= range[i]) // On verifie que la valeur de i + 1 est < a la valeur de i
			return ;
	i++;
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(range[i] + 48);
		i++;
	}
	if (range[0] < (10 - n))			// Permet de ne pas afficher lorsque on est arrivez a la fin
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	range[9];

	if (n >= 10 || n < 0) // On verifie si le nombre envoye est negatif ou superieur a 10
		return ;
	i = -1; 
	while (++i < n)		// On remplie une premiere fois le tableau avec 0,1,2,3,4,5
		range[i] = i;
	while (range[0] <= (10 - n) && n >= 1)
	{
		fr_print(range, n);	// On envoit le tableau et n pour l'affichage
		range[n - 1]++;		// On incremente le dernier chiffre
		i = n;
		while (i > 0 && n > 1)	// Incrementation des valeurs du tableau
		{
			i--;
			if (range[i] > 9) // Si la valeur de i est egale a 9
			{
				range[i - 1]++;	// On incremente la valeur de i -1 du tableau
				range[i] = 0; 	// On repasse la valeur de i a 1
			}
		}
	}
}

int main(void)
{
    ft_print_combn(5);
    return (0);
}
