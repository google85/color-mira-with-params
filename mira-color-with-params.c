#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mira(int min, int max) {
    int i;
    for (i=min; i<=max; i++) {
        printf("%s%d%s", "\e[48;5;", i, "m \e[0m");
    }
    for (i=max; i>=min; i--) {
        printf("%s%d%s", "\e[48;5;", i, "m \e[0m");
    }
    printf("%s", "\r\n");
}

int main(int argc, char *argv[]) {
    int min, max;
    if (argc > 2) {  //cum exista default argv[0] numele executabilului, de la 2 argumente in sus avem argumente
        min = atoi(argv[1]);
        max = atoi(argv[2]);
        printf("Parametri: %d, %d %s", min, max, "\n");
    } else {
        min = 16;
        max = 21;
        printf("Se poate executa si cu parametri, de ex: %s%s", "\n", "  ./test01 16 21");
    }
    printf("%s", "\n");
    // apel functie
    mira(min, max);
    return 0;
}

