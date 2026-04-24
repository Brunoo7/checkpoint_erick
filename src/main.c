#include <stdio.h>

// MENU
void menu() {
    printf("\n==============================\n");
    printf("   SISTEMA ACADEMICO\n");
    printf("==============================\n");
    printf("1 - Inserir notas\n");
    printf("2 - Calcular media\n");
    printf("3 - Verificar situacao\n");
    printf("6 - Sair\n");
}

// MEDIA
float calcular_media(float n1, float n2) {
    return (n1 + n2) / 2;
}

int main() {
    int opcao;
    float nota1, nota2, media;
    int tem_notas = 0;
    int media_calculada = 0;

    do {
        menu();
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {

        case 1:
            printf("Nota 1: ");
            scanf("%f", &nota1);
            printf("Nota 2: ");
            scanf("%f", &nota2);
            tem_notas = 1;
            media_calculada = 0;
            printf("Notas salvas!\n");
            break;

        case 2:
            if (tem_notas) {
                media = calcular_media(nota1, nota2);
                media_calculada = 1;
                printf("Media: %.2f\n", media);
            } else {
                printf("Insira as notas primeiro!\n");
            }
            break;

        case 3:
            if (media_calculada) {
                if (media >= 6)
                    printf("Aprovado\n");
                else if (media >= 4)
                    printf("Recuperacao\n");
                else
                    printf("Reprovado\n");
            } else {
                printf("Calcule a media primeiro!\n");
            }
            break;

        case 6:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida!\n");
        }

    } while (opcao != 6);

    return 0;
}