Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Écrivez un programme qui prend une chaîne et laffiche avec exactement trois espaces
entre chaque mot, sans espaces ni tabulations au début ou à la fin,
suivi dune nouvelle ligne.

Un mot est une section de chaîne délimitée soit par des espaces / tabulations, soit par le
début / fin de la chaîne.

Si le nombre de paramètres nest pas 1, ou sil ny a pas de mots, affichez simplement
une nouvelle ligne.

Exemples:

$> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
$> ./expand_str " seulement          la c'est      plus dur " | cat -e
seulement   la   c'est   plus   dur$
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
$>
