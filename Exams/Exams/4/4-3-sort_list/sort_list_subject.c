Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function 
pointer cmp to select the order to apply, and returns a pointer to the 
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h 
that is provided to you. You must include that file 
(#include "list.h"), but you must not turn it in. We will use our own 
to compile your assignment.

Functions passed as cmp will always return a value different from 
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list 
in ascending order:

Écrivez les fonctions suivantes:

t_list * sort_list (t_list * lst, int (* cmp) (int, int));

Cette fonction doit trier la liste donnée en paramètre, à laide de la fonction
pointeur cmp pour sélectionner lordre à appliquer et renvoie un pointeur sur le
premier élément de la liste triée.

Les doublons doivent rester.

Les entrées seront toujours cohérentes.

Vous devez utiliser le type t_list décrit dans le fichier list.h
qui vous est fourni. Vous devez inclure ce fichier
(#include "list.h"), mais vous ne devez pas le rendre. Nous utiliserons notre propre
pour compiler votre devoir.

Les fonctions passées en tant que cmp renverront toujours une valeur différente de
0 si a et b sont dans le bon ordre, 0 sinon.

Par exemple, la fonction suivante utilisée comme cmp triera la liste
Dans lordre croissant:

int ascending(int a, int b)
{
	return (a <= b);
}
