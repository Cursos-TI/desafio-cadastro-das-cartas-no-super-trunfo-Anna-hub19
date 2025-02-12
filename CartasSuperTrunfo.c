#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    typedef struct {
    char estado;
    char codigo[MAX_CODIGO];
    char nome[MAX_NOME];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;
    
    
    void cadastrarCidade(Cidade *cidade) {
    printf("Digite o estado: ");
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
    printf("-----------------------------------\n");
}

    return 0;
}
