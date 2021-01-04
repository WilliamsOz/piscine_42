Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in 
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the 
begin/end of the string.

If the number of parameters is different from 1, the program will display 
'\n'.

In the parameters that are going to be tested, there won't be any "additional" 
spaces (meaning that there won't be additionnal spaces at the beginning or at 
the end of the string, and words will always be separated by exactly one space).

Écrivez un programme qui prend une chaîne en paramètre et affiche ses mots dans
lordre inverse.

Un "mot" est une partie de la chaîne délimitée par des espaces et / ou des tabulations, ou
début / fin de la chaîne.

Si le nombre de paramètres est différent de 1, le programme affichera
'\n'.

Dans les paramètres qui vont être testés, il ny aura pas de "complément"
espaces (ce qui signifie quil ny aura pas despaces supplémentaires au début ou à
la fin de la chaîne et les mots seront toujours séparés par exactement un espace).

Exemples:

$> ./rev_wstr "le temps du mepris precede celui de l'indifference" | cat -e
l'indifference de celui precede mepris du temps le$
$> ./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "il contempla le mont" | cat -e
mont le contempla il$
$> ./rev_wstr | cat -e
$
$>
