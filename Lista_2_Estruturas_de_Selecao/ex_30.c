#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char resposta[10];

    printf("O animal e mamifero? (sim/nao): ");
    scanf("%s", resposta);
    
    if (strcmp(resposta, "sim") == 0) { // mamifero
        printf("O animal e quadrupede? (sim/nao): ");
        scanf("%s", resposta);
        if (strcmp(resposta, "sim") == 0) { // quadrupede
            printf("O animal e carnivoro? (sim/nao): ");
            scanf("%s", resposta);
            if (strcmp(resposta, "sim") == 0) { // carnivoro
                printf("O animal escolhido foi o leao.\n");
            } else { // nao carnivoro 
                printf("O animal e herbivoro? (sim/nao): ");
                scanf("%s", resposta); 
                if (strcmp(resposta, "sim") == 0) { // herbivoro
                    printf("O animal escolhido foi o cavalo.\n");
                } else { // nao herbivoro
                    printf("Animal nao encontrado.\n");
                }
            }
        } else { // nao quadrupede
            printf("O animal e bipede? (sim/nao): ");
            scanf("%s", resposta);
            if (strcmp(resposta, "sim") == 0) { // bipede
                printf("O animal e onivoro? (sim/nao): ");
                scanf("%s", resposta);
                if (strcmp(resposta, "sim") == 0) { // onivoro
                    printf("O animal escolhido foi o homem.\n");
                } else {
                    printf("O animal e frutifero? (sim/nao): ");
                    scanf("%s", resposta);
                    if (strcmp(resposta, "sim") == 0) { // frutifero
                        printf("O animal escolhido foi o macaco.\n");
                    } else { // nao frutifero
                        printf("Animal nao encontrado.\n");
                    }
                }
            } else { // nao bipede
                printf("O animal e voador? (sim/nao): ");
                scanf("%s", resposta);
                if (strcmp(resposta, "sim") == 0) {
                    printf("O animal escolhido foi o morcego.\n");
                } else {
                    printf("O animal e aquatico? (sim/nao): ");
                    scanf("%s", resposta);
                    if (strcmp(resposta, "sim") == 0) {
                        printf("O animal escolhido foi a baleia.\n");
                    } else {
                        printf("Animal nao encontrado.\n");
                    }
                }
            }
        }
    } else { // nao mamifero
        printf("O animal e uma ave? (sim/nao): ");
        scanf("%s", resposta);
        if (strcmp(resposta, "sim") == 0) {
            printf("O animal e nao-voador? (sim/nao): ");
            scanf("%s", resposta);
            if (strcmp(resposta, "sim") == 0) {
                printf("O animal e tropical? (sim/nao): ");
                scanf("%s", resposta);
                if (strcmp(resposta, "sim") == 0) {
                    printf("O animal escolhido foi o avestruz.\n");
                } else {
                    printf("O animal e polar? (sim/nao): ");
                    scanf("%s", resposta);
                    if (strcmp(resposta, "sim") == 0) {
                        printf("O animal escolhido foi o pinguim.\n");
                    } else {
                        printf("Animal nao encontrado.\n");
                    }
                }
            } else { // e voador
                printf("O animal e nadador? (sim/nao): ");
                scanf("%s", resposta);
                if (strcmp(resposta, "sim") == 0) {
                    printf("O animal escolhido foi o pato.\n");
                } else {
                    printf("O animal e de rapina? (sim/nao): ");
                    scanf("%s", resposta);
                    if (strcmp(resposta, "sim") == 0) {
                        printf("O animal escolhido foi a aguia.\n");
                    } else {
                        printf("Animal nao encontrado.\n");
                    }
                }
            }
        } else { // nao ave
            printf("O animal e um reptil? (sim/nao): ");
            scanf("%s", resposta);
            if (strcmp(resposta, "sim") == 0) {
                printf("O animal tem casco? (sim/nao): ");
                scanf("%s", resposta);
                if (strcmp(resposta, "sim") == 0) {
                    printf("O animal escolhido foi a tartaruga.\n");
                } else {
                    printf("O animal e carnivoro? (sim/nao): ");
                    scanf("%s", resposta);
                    if (strcmp(resposta, "sim") == 0) {
                        printf("O animal escolhido foi o crocodilo.\n");
                    } else {
                        printf("O animal nao tem patas? (sim/nao): ");
                        scanf("%s", resposta);
                        if (strcmp(resposta, "sim") == 0) {
                            printf("O animal escolhido foi a cobra.\n");
                        } else {
                            printf("Animal nao encontrado.\n");
                        }
                    }
                }
            }
        }
    }

    return 0;
}