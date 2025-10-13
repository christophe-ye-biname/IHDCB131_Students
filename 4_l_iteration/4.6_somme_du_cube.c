#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int nombre, a, b;
    bool solution_trouvee = false;
    a = 0;
    // TODO: afficher une phrase permettant d'encoder le nombre et récupérer sa valeur
    printf("Entrez un nombre");
    scanf("%i", &nombre);
    // TODO: chercher et trouver si nombre peut être décomposé en la somme de deux cubes de deux nombres positifs et si oui, récupérer ces deux nombres et changer la valeur de solution_trouvee
    int count = 0;
    while (count < nombre/5 || solution_trouvee == false){
        if (count*count*count == nombre){
            b = count;
            solution_trouvee = true;
        }
        count++;
    }
    if (solution_trouvee) {
        printf("%d est la somme du cube de %d et de %d.\n", nombre, a, b);
    } else {
        printf("Aucune paire de nombres positifs n'a été trouvée.\n");
    }

    return 0;
}
