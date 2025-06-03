#include <stdio.h>


int main(){

    char estado, nome_da_cidade[50], numero_da_cidade[5], codigo_da_carta[10]; 
    int  populacao, numeros_de_pontos_turisticos, total_de_cartas = 0;
    float area_em_mt2, pib,  densidade_populacional, pib_per_capita, super_poder;
    //Variavel para confirmação
    char continuar;

    
    do{
 //A função principal desse printf é contabilizar as cartas criadas.
    printf("\nCadastre a carta %d:\n", total_de_cartas + 1);

    printf("Cadastre uma carta de A à H: \n");
    scanf(" %c", &estado);

    printf("Represente a cidade com Nome:\n");
    scanf(" %[^\n]", &nome_da_cidade);

    printf("Represente a cidade com número de 01 à 04: \n");
    scanf(" %s", &numero_da_cidade);

// Nesse codigo vamos receber duas repostas para gerar uma terceira.
// EX: estado=A, numero da cidade=01, respota gerada: codigo da carta = A01.
    sprintf(codigo_da_carta, "%c%s", estado, numero_da_cidade);
    printf("Carta Gerada: %s\n", codigo_da_carta);

// Esse comando e necessario para memorizar novas cartas criadas.
    total_de_cartas++;

    
    printf("Insira a quantidade da população:\n");
    scanf(" %d", &populacao);

    printf("insira a quantidade de pontos turisticos:\n");
    scanf(" %d", &numeros_de_pontos_turisticos);

    printf("Insira à area em mts²:\n");
    scanf(" %f", &area_em_mt2);

    printf("Insira o PIB:\n");
    scanf(" %f", &pib);

    //Exibir dados cadastrados.
    printf("\n *Dados da Carta %d*\n", total_de_cartas);

    printf("Estado: %c\nNome da Cidade: %s\nNumero da Cidade: %s\nCarta: %s\n", estado, nome_da_cidade, numero_da_cidade, codigo_da_carta);

    // Cálculos das novas informações
    densidade_populacional = populacao / area_em_mt2;
    printf("Densidade populacional: (?)\n");

    pib_per_capita = pib / populacao;
    printf("PIB per Capita: (?) \n");

    // Calculo do super poder, soma de todos os atributos. 
    super_poder = populacao + numeros_de_pontos_turisticos + area_em_mt2 + pib + densidade_populacional + pib_per_capita;
    printf("Super Poder: (?)\n", super_poder);

    
    //Exibir atributos da Carta.
    printf("\n *Atribustos da Carta*\n");

    printf("População: %d\nPontos Turisticos: %d\n", populacao, numeros_de_pontos_turisticos);
    printf("Area em mts²: %f\nPIB: %f\n", area_em_mt2, pib); 
    
    //Exibir atributos especiais ocultos.
    printf("\n *Atributos Especiais*\n");
    printf("Densidade Populacional: %.2f hab/m²\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);
    printf("Super Poder: %.2f\n", super_poder);

    
    //Perguntar se deseja continuar cadastrando.
    printf("\n Deseja Cadastrar uma outra carta? (S/N):\n");
    scanf(" %c", &continuar);

    //Quaisquer respostas alem do 'S' e 's', serão interpretadas como 'Não'.
    }while (continuar == 'S'|| continuar == 's');

    
    
    printf("\n *Criação de carta concluido, Divirta-se e Obrigado!*\n");

    
    
    return 0;



    
}