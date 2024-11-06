#include <stdio.h>

int main() {
    int n, i;
    float nota, soma = 0.0, media;

    // Pergunta o número de notas
    printf("Quantas notas voce deseja inserir? ");
    scanf("%d", &n);

    // Verifica se o número de notas é válido
    if (n <= 0) {
        printf("Número invalido de notas!\n");
        return 1;
    }

    // Leitura das notas e soma
    for (i = 1; i <= n; i++) {
        printf("Digite a nota %d:", i);
        scanf("%f", &nota);
        soma += nota;  // Acumulando a soma das notas
    }

    // Cálculo da média
    media = soma / n;

    // Exibindo o resultado


        if(media>=6){
    printf("Aprovado! Media:%.2f\n",media);
    }else{
     printf("Reprovado, continue tentando. Media:%.2f\n",media);
    }

    return 0;
}
