#include <stdio.h>

int main(void) {
    int nombre1, nombre2, resultat;

    char calcul[3];
    // TODO: récupérer le calcul
    printf("Entrez votre calcul\n");
    scanf("%s", calcul);
          
          
    nombre1 = calcul[0] - '0';
    nombre2 = calcul[2] - '0';
    // TODO: calculer le résultat
    switch (calcul[1]) {
  case '+':
    // code block
    resultat = nombre1 + nombre2;
    printf("= %i", resultat);
    break;
  case '-':
    // code block
    resultat = nombre1 - nombre2;
    printf("= %i", resultat);
    break;
  case '*':
    // code block
    resultat = nombre1 * nombre2;
    printf("= %i", resultat);
    break;
  case '/':
    // code block
    resultat = nombre1 / nombre2;
    printf("= %i", resultat);
}
return 0;
}
