#include<stdio.h>
#include<stdlib.h>

void menu_principal(void);
void informacoes_gerais(void);
void informacoes_da_equipe(void);


int main(void){
    menu_principal();

    printf("fim");

    return 0;
}


void menu_principal(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("____________________________________________________________________\n");    
    printf("| = = = = = Sistema de Gestão para uma loja de conveniencia  = = = |\n");    
    printf("||                                                                ||\n");    
    printf("||  1 - Modulo de produtos                                        ||\n");    
    printf("||  2 - Modulo de clientes                                        ||\n");    
    printf("||  3 - Modulo de vendas                                          ||\n");    
    printf("||  4 - Modulo de relatorios                                      ||\n");    
    printf("||  5 - Modulo de informações                                     ||\n");    
    printf("||  0 - sair                                                      ||\n");    
    printf("||                                                                ||\n");    
    printf("||  => Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar();
    printf("||                                                                ||\n");    
    printf("|==================================================================|\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}