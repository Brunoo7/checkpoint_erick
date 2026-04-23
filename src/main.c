#include<stdio.h>

int main() {
    void menu() {
        printf("\n==============================\n");
        printf("   SISTEMA ACADEMICO\n");
        printf("\n==============================\n");
        printf("1 - Inserir notas\n");
        printf("2 - Calcular media\n");
        printf("3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n");
        printf("5 - Calcular derivada\n");
        printf("6 - Sair\n");
}
    
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
                mostrar_situacao(media);
            } else {
                printf("Calcule a media primeiro!\n");
            }
            break;
    return 0;
}
