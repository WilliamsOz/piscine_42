/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Howto.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 09:22:33 by wiozsert          #+#    #+#             */
/*   Updated: 2020/08/04 11:15:55 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* cat /etc/passwd | grep -v "^#" | sed -n 'n;p' | cut -d ':' -f 1 | rev | sort -r | sed -n $FT_LINE1,$(echo $FT_LINE2)p | sed 's/$/, /g' | tr -d '\n' | sed 's/, $/./g' | tr -d '\n'

cat /etc/passwd | grep -v "^#" | sed -n 'n;p' | cut -d ':' -f 1 | rev | sort -r | sed 's/$/, /g'

grep -v "^#" permet de prendre toute les lignes sauf celle qui commence par #

sed -n 'n;p' permet de garder une ligne sur deux a partir de la deuxieme

cut -d ':' -f 1 permet de delimiter a partir du ':' puis avec la commande -f 1 on retire le ':'

rev permet d'inverser la sortie

sort -r permet de trier dans l'ordre decroissant

sed -n permet d'afficher un intervalle de ligne 

sed 's/$/, /g' permet d'ajouter ', ' avant le $
