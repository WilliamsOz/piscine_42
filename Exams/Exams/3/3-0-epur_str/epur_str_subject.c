Assignment name  : epur_str
Expected files   : epur_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.

Écrivez un programme qui prend une chaîne et affiche cette chaîne avec exactement un
espace entre les mots, sans espaces ni tabulations au début ou à la fin,
suivi dun \n.

Un "mot" est défini comme une partie dune chaîne délimitée soit par des espaces / tabulations, soit
par le début / la fin de la chaîne.

Si le nombre darguments nest pas égal à 1 ou sil ny a pas de mots à afficher, le
le programme affiche \n.

Exemples :

$> ./epur_str "vous voyez c'est facile d'afficher la meme chose" | cat -e
vous voyez c'est facile d'afficher la meme chose$
$> ./epur_str " seulement          la c'est      plus dur " | cat -e
seulement la c'est plus dur$
$> ./epur_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./epur_str "" | cat -e
$
$>
