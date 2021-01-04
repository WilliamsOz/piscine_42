Assignment name  : ft_list_size
Expected files   : ft_list_size.c, ft_list.h
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that is
passed to it.

It must be declared as follows:

Écrivez une fonction qui renvoie le nombre déléments dans la liste chaînée qui est
passé à elle.

Il doit être déclaré comme suit:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

Vous devez utiliser la structure suivante et la rendre en tant que fichier appelé
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
