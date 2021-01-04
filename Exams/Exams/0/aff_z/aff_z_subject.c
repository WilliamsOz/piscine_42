Assignment name  : aff_z
Expected files   : aff_z.c
Allowed functions: write
--------------------------------------------------------------------------------

Écrire un programme qui prend en paramètre une chaîne de caractères, et qui
affiche sur la sortie standard le premier caractère 'z' rencontré dans
cette chaîne, suivi de '\n'. Si aucun 'z'
n'est rencontré dans la chaîne, le programme affiche 'z' suivi de
'\n'. Si le nombre de paramètres est différent de 1, le
programme affiche 'z' suivi de '\n'.

Exemple:

$> ./aff_z "abc" | cat -e
z$
$> ./aff_z "dubO a POIL" | cat -e
z$
$> ./aff_z "zaz sent le poney" | cat -e
z$
$> ./aff_z | cat -e
z$