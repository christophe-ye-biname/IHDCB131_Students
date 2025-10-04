#include <stdio.h>

int main(void) {
    double longueur_peinture, largeur_peinture, cout_bois_cm, cout_toile_m2, quantite_bois, longueur_toile, largeur_toile, cout_bois, cout_toile, cout_total;

    printf("Donnez la longueur et la largeur de la peinture: ");
    // TODO: récupérer la longueur et la largeur
    scanf("%lf %lf", &longueur_peinture, &largeur_peinture);
    printf("Donnez le cout par centimètre du bois pour le châssis: ");
    // TODO: récupérer le cout par cm du bois
    scanf("%lf", &cout_bois_cm);
    printf("Donnez le cout par mètre carré de la toile: ");
    // TODO: récupérer le cout par mètre carré de la toile
    scanf("%lf", &cout_toile_m2);
    // TODO: calculer la quantité de bois nécessaire
    quantite_bois = 2 * (longueur_peinture + largeur_peinture);
    // TODO: calculer la longueur de la toile
    longueur_toile = longueur_peinture + 6;
    // TODO: calculer la largeur de la toile
    largeur_toile = largeur_peinture + 6;
    // TODO: calculer le cout du bois
    cout_bois = cout_bois_cm * quantite_bois;
    // TODO: calculer le cout de la toile
    cout_toile = cout_toile_m2 * longueur_toile * largeur_toile;
    // TODO: calculer le cout total
    cout_total = cout_toile + cout_bois;
    printf("Pour une peinture de %.1lf cm de longueur et %.1lf cm de largeur, vous devriez acheter %.2lf cm de bois.\n", longueur_peinture, largeur_peinture, quantite_bois);
    printf("La toile devra avoir une longueur de %.1lf cm et une largeur de %.1lf cm.\n", longueur_toile, largeur_toile);
    printf("Étant donné que le prix du bois est %.2lf euro par cm courant et que la toile coute %.2lf euro par mètre carré:\n", cout_bois_cm, cout_toile_m2);
    printf("Le bois coûtera %.2lf euro.\n", cout_bois);
    printf("La toile coûtera %.2lf euro.\n", cout_toile);
    printf("Le prix total des matériaux sera %.2lf euro.\n", cout_total);

    return 0;
}
