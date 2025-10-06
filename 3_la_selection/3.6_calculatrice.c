#include <stdio.h>

int main(void) {
    int nombre1, nombre2, resultat;
    char operateur;

    // TODO: récupérer le calcul
    printf("nombre 1");
    scanf("%i", &nombre1);
    printf("nombre 2");
    scanf("%i", &nombre2);
    printf("operateur");
    scanf("%c", &operateur);
    // TODO: calculer le résultat
    switch (operateur) {
  case '+':
    // code block
    resultat = nombre1 + nombre2;
    break;
  case '-':
    // code block
    resultat = nombre1 - nombre2;
    break;
  case '*':
    // code block
    resultat = nombre1 * nombre2;
    break;
  case '/':
    // code block
    resultat = nombre1 / nombre2;

    return 0;
}
}
