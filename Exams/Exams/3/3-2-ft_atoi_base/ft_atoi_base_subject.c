Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);

Ecrire une fonction qui convertit l'argument chaîne str (base N <= 16)
à un entier (base 10) et le renvoie.

Les caractères reconnus dans l'entrée sont: 0123456789abcdef
Celles-ci doivent bien sûr être ajustées en fonction de la base demandée. Pour
par exemple, la base 4 reconnaît "0123" et la base 16 reconnaît "0123456789abcdef".

Les lettres majuscules doivent également être reconnues: "12fdb3" est identique à "12FDB3".

Les signes moins ('-') ne sont interprétés que s’ils sont le premier caractère du
chaîne.

Votre fonction doit être déclarée comme suit:

int ft_atoi_base (const char * str, int str_base);
