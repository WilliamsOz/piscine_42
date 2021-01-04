Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Écrire un programme nommé rotone, qui prend en paramètre une chaîne de
caractères, et qui affiche cette chaîne en remplaçant chaque caractère
alphabétique par le caractère suivant dans l'ordre alphabétique.

'z' devient 'a' et 'Z' devient 'A'. Les majuscules restent des majuscules, les
minuscules restent des minuscules.

L'affichage se termine toujours par un retour à la ligne.

Si le nombre de paramètres transmis est différent de 1, le programme affiche
'\n'.

Exemple:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>