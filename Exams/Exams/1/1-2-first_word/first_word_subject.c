Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Ecrire un programme qui prends un chaine de caractere et affiche son premier mot,
suivi dune nouvelle ligne.

Un mot est une section de chaine de caractere delimiter par un espace/tabulation ou par
le debut/fin de la chaine de caractere.

Si le nombre de parametre nest pas 1, ou si il ny a aucun mot, afficher une nouvelle ligne.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>