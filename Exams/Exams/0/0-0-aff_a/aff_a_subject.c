Assignment name  : aff_a
Expected files   : aff_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.

Ecrire un programme qui prends une string et affiche le premier caractere 'a' suivi dun retour a la ligne.
Si aucun caractere 'a' nest trouver dans la string, le programme doit ecrire un retour a la ligne.
Si le nombre de parametres nest pas 1, le programme affiche 'a' suivi dun retour a la ligne.

Example:

$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$
