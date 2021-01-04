Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there is less than one argument, the program displays \n.

Écrire un programme qui prend une chaîne et affiche cette chaîne après lavoir tournée
un mot à gauche.

Ainsi, le premier mot devient le dernier et les autres restent dans le même ordre.

Un "mot" est défini comme une partie dune chaîne délimitée soit par des espaces / tabulations, soit
par le début / la fin de la chaîne.

Les mots seront séparés par un seul espace dans la sortie.

Sil y a moins dun argument, le programme affiche \ n.

Exemple:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring | cat -e
$
$>
