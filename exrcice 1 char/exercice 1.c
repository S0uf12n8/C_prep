#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ========= lirePhrases ========= */
char** lirePhrases(int n) {
    char buffer[101];
    char **tab = malloc(n * sizeof(char*));
    int i;

    if (tab == NULL) return NULL;

    for (i = 0; i < n; i++) {
        printf("Donner la phrase %d : ", i + 1);

        /* read full line (phrase) */
        scanf(" %[^\n]", buffer);

        tab[i] = malloc((strlen(buffer) + 1) * sizeof(char));
        if (tab[i] == NULL) return NULL;

        strcpy(tab[i], buffer);
    }
    return tab;
}

/* ========= trierParLongueur ========= */
void trierParLongueur(char **tab, int n) {
    int i, j;
    char *tmp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strlen(tab[i]) > strlen(tab[j])) {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
        }
    }
}

/* ========= fusionner ========= */
char* fusionner(char **tab, int n, char separateur) {
    int i;
    int total = 0;
    char *phrase;
    char sep[2];

    /* calculate total size */
    for (i = 0; i < n; i++) {
        total += strlen(tab[i]);
    }
    total += (n - 1); /* separators */
    total += 1;       /* '\0' */

    phrase = malloc(total * sizeof(char));
    if (phrase == NULL) return NULL;

    phrase[0] = '\0';

    sep[0] = separateur;
    sep[1] = '\0';

    for (i = 0; i < n; i++) {
        strcat(phrase, tab[i]);
        if (i < n - 1) {
            strcat(phrase, sep);
        }
    }
    return phrase;
}

/* ========= liberer ========= */
void liberer(char **tab, int n) {
    int i;
    for (i = 0; i < n; i++) {
        free(tab[i]);
    }
    free(tab);
}

/* ========= main ========= */
int main() {
    int n;
    char separateur;
    char **tab;
    char *phrase;

    printf("Donner le nombre de phrases : ");
    scanf("%d", &n);

    printf("Donner le separateur : ");
    scanf(" %c", &separateur);

    tab = lirePhrases(n);
    trierParLongueur(tab, n);

    phrase = fusionner(tab, n, separateur);
    printf("\nPhrase fusionnee : %s\n", phrase);

    liberer(tab, n);
    free(phrase);

    return 0;
}

