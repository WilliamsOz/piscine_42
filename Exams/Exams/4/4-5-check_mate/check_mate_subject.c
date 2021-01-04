Assignment name  : checkmate 
Expected files   : *.c, *.h
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program who takes rows of a chessboard in argument and check if your 
King is in a check position.

Chess is played on a chessboard, a squared board of 8-squares length with 
specific pieces on it : King, Queen, Bishop, Knight, Rook and Pawns.
For this exercice, you will only play with Pawns, Bishops, Rooks and Queen...
and obviously a King.

Each piece have a specific method of movement, and all patterns of capture are
detailled in the examples.txt file.

A piece can capture only the first ennemy piece it founds on its capture
patterns.

The board have a variable size but will remains a square. There is only one King
and all other pieces are against it. All other characters except those used for
pieces are considered as empty squares.

The King is considered as in a check position when an other enemy piece can
capture it. When it is the case, you will print "Success" on the standard output
followed by a newline, otherwise you will print "Fail" followed by a newline.

If there is no arguments, the program will only print a newline.

Écrivez un programme qui prend des lignes dun échiquier en argument et vérifiez si votre
King est en position de contrôle.

Les échecs sont joués sur un échiquier, une planche carrée de 8 carrés avec
pièces spécifiques dessus: roi, reine, évêque, chevalier, tour et pions.
Pour cet exercice, vous ne jouerez quavec des pions, des évêques, des tours et des reines ...
et évidemment un roi.

Chaque pièce a une méthode de mouvement spécifique, et tous les modèles de capture sont
détaillée dans le fichier examples.txt.

Une pièce ne peut capturer que la première pièce ennemie trouvée lors de sa capture
motifs.

La planche a une taille variable mais restera un carré. Il ny a quun seul roi
et toutes les autres pièces sont contre. Tous les autres caractères sauf ceux utilisés pour
les pièces sont considérées comme des carrés vides.

Le Roi est considéré comme en position de contrôle lorsquune autre pièce ennemie peut
capture le. Lorsque cest le cas, vous imprimerez "Success" sur la sortie standard
suivi dune nouvelle ligne, sinon vous imprimerez "Echec" suivi dune nouvelle ligne.

Sil ny a pas darguments, le programme imprimera uniquement une nouvelle ligne.

Examples:

$> ./chessmate '..' '.K' | cat -e
Fail$
$> ./chessmate 'R...' '..P.' '.K..' '....' | cat -e
Success$
$> ./chessmate 'R...' 'iheK' '....' 'jeiR' | cat -e
Success$
$> ./chessmate | cat -e
$
$>
