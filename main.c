#include<stdio.h>
#include<stdlib.h>

void menu_principal(void);
void informacoes_gerais(void);
void informacoes_da_equipe(void);
void tela_modulo_produtos(void);
void tela_cadastrar_produto(void);
void tela_verificar_produto(void);
void tela_alterar_produto(void);
void tela_excluir_produto(void);


int main(void){
    menu_principal();
    informacoes_gerais();
    informacoes_da_equipe();
    tela_modulo_produtos();
    tela_cadastrar_produto();
    tela_verificar_produto();
    tela_alterar_produto();
    tela_excluir_produto();
    printf("fim");

    return 0;
}


void menu_principal(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("____________________________________________________________________\n");    
    printf("||                                                                ||\n");    
    printf("| = = = = = Sistema de Gestão para uma loja de conveniencia  = = = |\n");    
    printf("||                                                                ||\n");    
    printf("||    1 - Modulo de produtos                                      ||\n");    
    printf("||    2 - Modulo de clientes                                      ||\n");    
    printf("||    3 - Modulo de vendas                                        ||\n");    
    printf("||    4 - Modulo de relatorios                                    ||\n");    
    printf("||    5 - Modulo de informações                                   ||\n");    
    printf("||    6 - Modulo de informações da equipe                         ||\n");    
    printf("||    0 - sair                                                    ||\n");    
    printf("||                                                                ||\n");    
    printf("||    => Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar();
    printf("||                                                                ||\n");    
    printf("|==================================================================|\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}

void informacoes_gerais(void){
    system("clear||cls");
    printf("\n");
    printf("____________________________________________________________________\n");    
    printf("||                                                                ||\n");    
    printf("|| = = = = = = = = = Menu de informacões gerais = = = = = = = = = ||\n");    
    printf("||                                                                ||\n");    
    printf("||           Universidade Federal do Rio Grande do Norte          ||\n");    
    printf("||              Centro de Ensino Superior do Seridó               ||\n");    
    printf("||            Departamento de Computação e Tecnologia             ||\n");    
    printf("||               Disciplina DCT1106 -- Programação                ||\n");    
    printf("||         Sistema de gestão para uma loja de conveniencia        ||\n");    
    printf("||                                                                ||\n");    
    printf("||================================================================||\n");   
    printf("||                                                                ||\n");    
    printf("||                                                                ||\n");    
    printf("||  Esse projeto trata do desenvolvimento de um sistema de gestão ||\n");    
    printf("||  para uma loja de conveniência, com o intuito de ser avaliado  ||\n");    
    printf("||  na disciplina DCT1106 - Programação.                          ||\n");    
    printf("||                                                                ||\n");    
    printf("||                                                                ||\n");    
    printf("|==================================================================|\n");    
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}

void informacoes_da_equipe(void){
    system("clear||cls");
    printf("\n");
    printf("____________________________________________________________________\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =   Menu de informações da equipe  = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||   Projeto desenvolvido por:                                    ||\n");
    printf("||                                                                ||\n");
    printf("||     Eduardo Nascimento Santos                                  ||\n");
    printf("||     github: https://github.com/Eduardo-NSantos                 ||\n");
    printf("||                                                                ||\n");
    printf("||     Luiz Henrique Felix                                        ||\n");
    printf("||     github: https://github.com/LuizFelixDev                    ||\n");
    printf("||                                                                ||\n");
    printf("|==================================================================|\n");    
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_modulo_produtos(void){
    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =          Módulo Produtos         = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      1 - Cadastrar Produto                                     ||\n");
    printf("||      2 - Verificar Produto                                     ||\n");
    printf("||      3 - Alterar Produto                                       ||\n");
    printf("||      4 - Excluir Produto                                       ||\n");
    printf("||      0 - Sair                                                  ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = = = = = = = = = = = = = = = = = =  = = = = = = = ||\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_cadastrar_produto(void){
    char nome[20], codigo[10], marca[15], preco[8];
    

    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =        cadastrar produto         = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      => Nome do produto: ");
    scanf("%s", nome);
    fgets(nome, 20, stdin);
    printf("||      => Codigo do produto: ");
    scanf("%s", codigo);
    gets(codigo, 10, stdin);
    printf("||      => Marca do produto: ");
    scanf("%s", marca);
    fgets(marca, 15, stdin);
    printf("||      => Preço do produto: ");
    scanf("%f", &preco);
    fgets(preco, 8, stdin);
    printf("||\n");
    printf("|| = = = = = = = = = = = = = = = = = = = = = = = =  = = = = = = = ||\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}  

void tela_verificar_produto(void){
    char codigo[10];

    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =        verificar produto         = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      => Codigo do produto: ");
    scanf("%s", codigo);
    fgets(codigo, 8, stdin);
    printf("||\n");
    printf("||      => Nome do produto: XXXXXXXX\n");
    printf("||      => Codigo do produto: XXXXXXXX\n");
    printf("||      => Marca do produto: XXXXXXXX\n");
    printf("||      => Preço do produto: XXXXXXXX\n");
    printf("||\n");
    printf("|| = = = = = = = = = = = = = = = = = = = = = = = =  = = = = = = = ||\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_alterar_produto(void){
    char nome[20], codigo[10], marca[15], preco[8];
    

    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =          Alterar Produto         = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      => Codigo do produto: ");
    scanf("%s", codigo);
    fgets(codigo, 8, stdin);
    printf("\n");
    printf("|| ______________________________________________________________ \n");
    printf("||\n");
    printf("||      => Nome do produto: ");
    scanf("%s", nome);
    fgets(nome, 20, stdin);
    printf("||      => Marca do produto: ");
    scanf("%s", marca);
    fgets(marca, 15, stdin);
    printf("||      => Preço do produto: ");
    scanf("%s", &preco);
    fgets(preco, 8, stdin);
    printf("||                                                                ||\n");
    printf("|| = = = = = = = = = = = = = = = = = = = = = = = =  = = = = = = = ||\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();

}

void tela_excluir_produto(void){
    char codigo[10];
    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =          Excluir Produto         = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      => Codigo do produto: ");
    scanf("%s", codigo);
    fgets(codigo, 10, stdin);
    printf("||                                                                ||\n");
    printf("||      => Produto excluído!                                      ||\n");
    printf("|| ______________________________________________________________ ||\n");
}
