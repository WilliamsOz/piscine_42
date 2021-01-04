Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.

Écrivez la fonction suivante:

int * ft_rrange (int start, int end);

Il doit allouer (avec malloc ()) un tableau dentiers, le remplir de suite
valeurs qui commencent à la fin et se terminent au début (y compris le début et la fin!), puis
renvoie un pointeur sur la première valeur du tableau.

Exemples:

- Avec (1, 3) vous retournerez un tableau contenant 3, 2 et 1
- Avec (-1, 2) vous retournerez un tableau contenant 2, 1, 0 et -1.
- Avec (0, 0) vous retournerez un tableau contenant 0.
- Avec (0, -3), vous retournerez un tableau contenant -3, -2, -1 et 0.
