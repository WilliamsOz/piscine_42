Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Ècrire un programme nommé union qui prend en paramètre deux chaînes de
caractères et qui affiche, sans doublon, les caractères qui apparaissent dans
l'une ou dans l'autre.

L'affichage se fera dans l'ordre d'apparition dans la ligne de commande.

L'affichage doit etre suivi d'un retour à la ligne.

Si le nombre de paramètres transmis est différent de 2, le programme affiche
\n.

Exemple:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>