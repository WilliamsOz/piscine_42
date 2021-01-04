Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Ecrire un programme appeller alpha_mirror qui prend une chaine et affiche une chaine
apres avoir replacer chaque lettre par son opposer dans lalphabet suivi dun '\n'.

'a' devient 'z', 'Z' devient 'A'

'd' devient 'w', 'M' devient 'N'

et ainsi de suite.

Le cas nest pas changé.

Si le nombre darguments nest pas égal à 1, affichez uniquement une nouvelle ligne.


Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
