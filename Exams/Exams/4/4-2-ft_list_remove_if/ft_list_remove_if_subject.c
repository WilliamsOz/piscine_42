Assignment name  : ft_list_remove_if
Expected files   : ft_list_remove_if.c
Allowed functions: free
--------------------------------------------------------------------------------

Write a function called ft_list_remove_if that removes from the
passed list any element the data of which is "equal" to the reference data.

It will be declared as follows :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:

Écrivez une fonction appelée ft_list_remove_if qui supprime de la
passé liste tous les éléments dont les données sont "égales" aux données de référence.

Il sera déclaré comme suit:

void ft_list_remove_if (t_list ** begin_list, void * data_ref, int (* cmp) ());

cmp prend deux void * et retourne 0 lorsque les deux paramètres sont égaux.

Vous devez utiliser le fichier ft_list.h, qui contiendra:

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
$>
