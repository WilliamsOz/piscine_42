Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it is possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.

Écrivez un programme nommé hidenp qui prend deux chaînes et affiche 1
suivi dune nouvelle ligne si la première chaîne est cachée dans la seconde,
sinon affiche 0 suivi dune nouvelle ligne.

Soit s1 et s2 des chaînes. On dit que s1 est caché dans s2 sil est possible de
trouver chaque lettre de s1 en s2, dans le même ordre quils apparaissent en s1.
De plus, la chaîne vide est masquée dans nimporte quelle chaîne.

Si le nombre de paramètres nest pas 2, le programme affiche une nouvelle ligne.

Exemples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>
