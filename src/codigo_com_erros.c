#include <stdio.h> //"Tirar aspas e incluir <>"

int main() {
    float nota1, nota2, media; //"adicionei ; no final da linha"

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); //"adicionei & antes de nota2"

    media = (nota1 + nota2) / 2; //"Consertei a fórmula de cálculo da média"

    if (media >= 6) { //"Consertei a condição para aprovação (media >= 6)"
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}