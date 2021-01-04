Assignment name  : str_capitalizer
Expected files   : str_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.

Écrivez un programme qui prend une ou plusieurs chaînes et, pour chaque argument,
met en majuscule le premier caractère de chaque mot (si c'est une lettre, évidemment),
met le reste en minuscules et affiche le résultat sur la sortie standard,
suivi d'un \n.

Un "mot" est défini comme une partie d'une chaîne délimitée soit par des espaces / tabulations, soit
par le début / la fin de la chaîne. Si un mot n'a qu'une seule lettre, il doit être
capitalisé.

S'il n'y a pas d'arguments, le programme doit afficher \ n.

Exemple:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "Premier PETIT TesT" | cat -e
Premier Petit Test$
$> ./str_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e
Deuxieme Test Un Peu Moins  Facile$
   Attention C'est Pas Dur Quand Meme$
Aller Un Dernier 0123456789pour La Route    E $
$>
