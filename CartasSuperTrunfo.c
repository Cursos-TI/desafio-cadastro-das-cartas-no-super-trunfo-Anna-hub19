#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

typedef struct {
    char estado;
    char codigo[MAX_CODIGO];
    char nome[MAX_NOME];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Cidade;

void calcularMetricas(Cidade *cidade) {
    cidade->densidade_populacional = cidade->populacao / cidade->area;
    cidade->pib_per_capita = cidade->pib / cidade->populacao;
}

void cadastrarCidade(Cidade *cidade) {
    printf("Digite o estado (ex: S para Sergipe): ");
    scanf(" %c", &cidade->estado);
    
    printf("Digite o código da carta (ex: S01): ");
    scanf(" %s", cidade->codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^"]s", cidade->nome);
    
    printf("Digite a população: ");
    scanf(" %d", &cidade->populacao);
    
    printf("Digite a área em km²: ");
    scanf(" %f", &cidade->area);
    
    printf("Digite o PIB: ");
    scanf(" %f", &cidade->pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &cidade->pontos_turisticos);
    
    calcularMetricas(cidade);
    printf("\nCadastro realizado com sucesso!\n\n");
}

void exibirCidade(Cidade cidade) {
    printf("Dados cadastrados:\n");
    printf("Estado: %c\n", cidade.estado);
    printf("Código da carta: %s\n", cidade.codigo);
    printf("Nome da cidade: %s\n", cidade.nome);
    printf("População: %d\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f\n", cidade.pib);
    printf("Número de pontos turísticos: %d\n", cidade.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", cidade.densidade_populacional);
    printf("PIB per capita: %.2f\n", cidade.pib_per_capita);
    printf("-----------------------------------\n");
}

void compararCartas(Cidade c1, Cidade c2) {
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c): %d\n", c1.nome, c1.estado, c1.populacao);
    printf("Carta 2 - %s (%c): %d\n", c2.nome, c2.estado, c2.populacao);
    
    if (c1.populacao > c2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome);
    } else if (c1.populacao < c2.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome);
    } else {
        printf("Resultado: Empate!\n");
    }
}

int main() {
    Cidade cidade1, cidade2;
    
    printf("Cadastro da primeira cidade:\n");
    cadastrarCidade(&cidade1);
    printf("Cadastro da segunda cidade:\n");
    cadastrarCidade(&cidade2);
    
    printf("\nListagem de cidades cadastradas:\n");
    exibirCidade(cidade1);
    exibirCidade(cidade2);
    
    compararCartas(cidade1, cidade2);
    
    return 0;
}
