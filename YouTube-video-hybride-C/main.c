#include <stdio.h>
#include <stdlib.h>

 /*
  Faites un programme qui demande le prénom, le nom, l'âge, l'année de naissance à un utilisateur, et qui l'affiche à l'écran.
  On utilisera les types int et char uniquement
  Attention, pour lire une chaine de caractère, vous ne devez pas utiliser le & dans le scanf() !
 */
int main()
{
    
    // Terrain pour le devoir
    char prenom[50];
    printf("Entrez votre prénom : ");
    scanf("%s", prenom); // PAS DE & POUR LES CHAINES DE CARACTÈRES (char []) !
    
    // Complétez le code ici
    
    // Live 1
    printf("Hello world!\n");

    // Types de nombres entiers
    int jConfinement = 13;
    long nimportequoi = 43854932;

    // Types de nombres réels
    float heure = 16.55;
    double annee = 2020;

    // Caractères
    char a = 'a';
    char helloworld[] = {"Bonjour monde!\n"};

    int chifreDuMalheur = 13;
    jConfinement++;


    // Conditions
    // ATTENTION : pas de point-virgule pour les conditions, par contre, il y a des accollades

    // Vérification d'égalité
    if (jConfinement == chifreDuMalheur) {
        printf("Ca porte malheur...");
    }

    // Vérification d'inégalité
    else if (jConfinement >= 14) {
        printf("Courage, ca fait deux semaines...");
    }

    // Vérification de différence
    if (jConfinement != 30) {
        printf("Ca ne fait pas pile 30 jours.");
    }

    // ET ou OU
    // et
    if (a == 'a' && annee == 2020) {
        printf("Tout s'est passé comme prévu.");
    }

    // ou
    if (a == 'a' || jConfinement == 3) {
        if (a == 'a') {
            printf("a est conforme");
        }
        printf("Au moins une des deux conditions est vraie");
    }

    // Nombre inconnu d'itérations
    // Exception, le do while prend un point-virgule à la fin de la condition.
    do {
        printf("On execute une fois sans savoir si la condition est vraie.");
    } while (a == 'c');

    while (a == 'a') {
        printf("La condition est toujours vraie");
        a = 'c';
    }

    // Nombre connu d'itérations
    for (jConfinement = jConfinement; jConfinement <= 50; jConfinement++) {
        printf("Confinement J+%d\n", jConfinement);
    }

    printf("Quel jour de confinement sommes-nous ? ");
    scanf("%d", &jConfinement);
    printf("Nous sommes au confiement J+%d\n", jConfinement);


    /*
    Ceci est
    Un long
    Commentaire
    */

    jConfinement = jConfinement + 1;
    jConfinement++;

    printf("La valeur de jConfinement est : %d, et la valeur de année est %lf\n", jConfinement, annee);
    printf("%s", helloworld);

    return 0;
}

