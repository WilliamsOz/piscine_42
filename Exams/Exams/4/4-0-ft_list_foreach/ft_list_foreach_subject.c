Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

Écrivez une fonction qui prend une liste et un pointeur de fonction, et applique la
fonction à chaque élément de la liste.

Il doit être déclaré comme suit:

void ft_list_foreach (t_list * begin_list, void (* f) (void *));

La fonction pointée par f sera utilisée comme suit:

(* f) (list_ptr-> données);

Vous devez utiliser la structure suivante et la rendre en tant que fichier appelé
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
