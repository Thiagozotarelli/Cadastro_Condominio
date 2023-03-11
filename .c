#include <stdio.h>
#include <string.h>



struct Morador {
    char nome[50];
    int anos_residencia;
    int idade;
};

int main() {
    struct  moradores[MAX_MORADORES];
    int num_moradores = 0;
    int , maior_idade = 0, mais_tempo_residencia = 0;
    float media_idade = 0;

    printf("Cadastro de moradores:\n");

    // Cadastro dos moradores
    while (num_moradores < MAX_MORADORES) {
        printf("\nMorador %d\n", num_moradores+1);
        printf("Nome: ");
        scanf("%s", moradores[num_moradores].nome);
        printf("Anos de residencia: ");
        scanf("%d", & moradores[num_moradores].anos_residencia);
        printf("Idade: ");
        scanf("%d", &moradores[num_moradores].idade);

        // Verifica se o usuário deseja cadastrar mais moradores
        char opcao;
        printf("\nDeseja cadastrar mais moradores? (s/n)");
        scanf(" %c", &opcao);
        if (opcao != 's') {
            break;
        }
        num_moradores++;
    }

    // Encontra o morador mais velho e com mais tempo de residência
    for (i = 0; i <= num_moradores; i++) {
        if (moradores[i].idade > moradores[maior_idade].idade) {
            maior_idade = i;
        }
        if (moradores[i].anos_residencia > moradores[mais_tempo_residencia].anos_residencia) {
            mais_tempo_residencia = i;
        }
        media_idade += moradores[i].idade;
    }
    media_idade = media_idade / num_moradores;

    // Exibe os resultados
    printf("\n--- Resultados ---\n");
    printf("Quantidade de moradores cadastrados: %d\n", num_moradores+1);
    printf("Média de idade dos moradores: %.2f\n", media_idade);
    printf("Morador mais velho: %s, %d anos\n", moradores[maior_idade].nome, moradores[maior_idade].idade);
    printf("Morador com mais tempo de residência: %s, %d anos de residencia\n", moradores[mais_tempo_residencia].nome, moradores[mais_tempo_residencia].anos_residencia);

    return 0;
}