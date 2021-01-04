Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Écrivez un programme qui prend un nombre positif (ou zéro) exprimé en base 10,
et laffiche en base 16 (lettres minuscules) suivi dune nouvelle ligne.

Si le nombre de paramètres nest pas 1, le programme affiche une nouvelle ligne.

Esemples :

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
