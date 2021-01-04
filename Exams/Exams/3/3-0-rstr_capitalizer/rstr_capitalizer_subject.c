Assignment name  : rstr_capitalizer
Expected files   : rstr_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or more strings and, for each argument, puts 
the last character of each word (if it is a letter) in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.

If there are no parameters, display \n.

Écrivez un programme qui prend une ou plusieurs chaînes et, pour chaque argument, place
le dernier caractère de chaque mot (sil sagit dune lettre) en majuscule et le reste
en minuscules, puis affiche le résultat suivi dun \n.

Un mot est une section de chaîne délimitée par des espaces / tabulations ou le début / fin du
chaîne. Si un mot a une seule lettre, il doit être en majuscule.

Sil ny a pas de paramètres, affichez \n.

Exemples:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "Premier PETIT TesT" | cat -e
premieR petiT tesT$
$> ./rstr_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e
deuxiemE tesT uN peU moinS  facilE$
   attentioN c'esT paS duR quanD memE$
alleR uN dernieR 0123456789pouR lA routE    E $
$>
