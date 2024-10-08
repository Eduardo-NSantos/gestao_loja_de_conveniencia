#include<stdio.h>
#include<stdlib.h>

int menu_principal(void);
void informacoes_gerais(void);
void informacoes_da_equipe(void);
void tela_modulo_produtos(void);
void tela_cadastrar_produto(void);
void tela_verificar_produto(void);
void tela_alterar_produto(void);
void tela_excluir_produto(void);

void tela_modulo_clientes(void);
void tela_cadastrar_cliente(void);
void tela_verificar_cliente(void);
void tela_alterar_cliente(void);
void tela_excluir_cliente(void);

void tela_modulo_vendas(void);
void tela_cadastrar_venda(void);
void tela_alterar_venda(void);
void tela_excluir_venda(void);

int main(void){
    char op = menu_principal();

    if(op == '1'){
        tela_modulo_produtos();
        tela_cadastrar_produto();
        tela_verificar_produto();
        tela_alterar_produto();
        tela_excluir_produto();
    }else if(op == '2'){
        tela_modulo_clientes();
        tela_cadastrar_cliente();
        tela_verificar_cliente();
        tela_alterar_cliente();
        tela_excluir_cliente();
    }else if(op == '3'){
        tela_modulo_vendas();
        tela_cadastrar_venda();
        tela_alterar_venda();
        tela_excluir_venda();
    }else if(op == '4'){
        system("clear||cls");
        printf("\n");
        printf("Menu em construção\n");
        printf("| Tecle <ENTER> para continuar...\n");
        getchar();
    }else if(op == '5'){
        informacoes_gerais();
    }else if(op == '6'){
        informacoes_da_equipe();
    }else if(op == '0'){
        printf("fim\n");
    }else{
        printf("Opção inválida!");
    }

    return 0;
}


int menu_principal(void){
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
    return op;
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
    fgets(codigo, 10, stdin);
    printf("||      => Marca do produto: ");
    scanf("%s", marca);
    fgets(marca, 15, stdin);
    printf("||      => Preço do produto: ");
    scanf("%s", preco);
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
    scanf("%s", preco);
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
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_modulo_clientes(void){
    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =          Módulo Clientes         = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      1 - Cadastrar Cliente                                     ||\n");
    printf("||      2 - Verificar Cliente                                     ||\n");
    printf("||      3 - Alterar Cliente                                       ||\n");
    printf("||      4 - Excluir Cliente                                       ||\n");
    printf("||      0 - Sair                                                  ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = = = = = = = = = = = = = = = = = =  = = = = = = = ||\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_cadastrar_cliente(void){
    char cpf[12], nomec[52], celular[15], email[52];

    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =        Cadastrar Cliente         = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      => CPF do cliente: ");
    scanf("%s", cpf);
    fgets(cpf, 12, stdin);
    printf("||      => Nome do Cliente: ");
    scanf("%s", nomec);
    fgets(nomec, 52, stdin);
    printf("||      => Celular do cliente: ");
    scanf("%s", celular);
    fgets(celular, 15, stdin);
    printf("||      => E-mail do cliente: ");
    scanf("%s", email);
    fgets(email, 52, stdin);
    printf("||\n");
    printf("|| = = = = = = = = = = = = = = = = = = = = = = = =  = = = = = = = ||\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_verificar_cliente(void){
    char cpf[12];

    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =        verificar cliente         = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      => CPF do cliente: ");
    scanf("%s", cpf);
    fgets(cpf, 12, stdin);
    printf("||\n");
    printf("||      => Nome do Cliente: XXXXXXXX\n");
    printf("||      => CPF do Cliente: XXXXXXXX\n");
    printf("||      => Celular do Cliente: XXXXXXXX\n");
    printf("||      => E-mail do Cliente: XXXXXXXX\n");
    printf("||\n");
    printf("|| = = = = = = = = = = = = = = = = = = = = = = = =  = = = = = = = ||\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_alterar_cliente(void){
    
    char cpf[12], nomec[52], celular[15], email[52];

    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =          Alterar Cliente         = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      => CPF dop cliente: ");
    scanf("%s", cpf);
    fgets(cpf, 12, stdin);
    printf("\n");
    printf("|| ______________________________________________________________ \n");
    printf("||\n");
    printf("||      => Nome do cliente: ");
    scanf("%s", nomec);
    fgets(nomec, 52, stdin);
    printf("||      => Celular do cliente: ");
    scanf("%s", celular);
    fgets(celular, 15, stdin);
    printf("||      => E-mail do cliente: ");
    scanf("%s", email);
    fgets(email, 52, stdin);
    printf("||                                                                ||\n");
    printf("|| = = = = = = = = = = = = = = = = = = = = = = = =  = = = = = = = ||\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_excluir_cliente(void){
    char cpf[12];
    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =          Excluir Cliente         = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      => CPF do cliente: ");
    scanf("%s", cpf);
    fgets(cpf, 12, stdin);
    printf("||                                                                ||\n");
    printf("||      => Cliente excluído!                                      ||\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_modulo_vendas(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("____________________________________________________________________\n");    
    printf("||                                                                ||\n");    
    printf("| = = = = = Sistema de Gestão para uma loja de conveniencia  = = = |\n");    
    printf("||                                                                ||\n");    
    printf("||    1 - Cadastrar venda                                         ||\n");    
    printf("||    2 - alterar venda                                           ||\n");    
    printf("||    3 - Excluir venda                                           ||\n");    
    printf("||    4 - Exibir venda                                            ||\n");    
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

void tela_cadastrar_venda(void){
    char cpf[12], produtos_vendidos[6], opcao_entrega[15], valor_total[9], codigo[11];

    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =        Cadastrar venda           = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      => CPF do cliente: ");
    scanf("%s", cpf);
    fgets(cpf, 12, stdin);
    printf("||      => Produtos vendidos: ");
    scanf("%s", produtos_vendidos);
    fgets(produtos_vendidos, 6, stdin);
    printf("||      => Opção de entrega: ");
    scanf("%s", opcao_entrega);
    fgets(opcao_entrega, 15, stdin);
    printf("||      => Valor total: ");
    scanf("%s", valor_total);
    fgets(valor_total, 9, stdin);
    printf("||      => Código da venda: ");
    scanf("%s", codigo);
    fgets(codigo, 11, stdin);
    printf("||\n");
    printf("|| = = = = = = = = = = = = = = = = = = = = = = = =  = = = = = = = ||\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_alterar_venda(void){
    char cpf[12], produtos_vendidos[6], opcao_entrega[15], valor_total[9], codigo[11];

    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =         Alterar venda            = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      => Código da venda: ");
    scanf("%s", codigo);
    fgets(codigo, 11, stdin);
    printf("||      => (Novo) CPF do cliente: ");
    scanf("%s", cpf);
    fgets(cpf, 12, stdin);
    printf("||      => (Novo) Produtos vendidos: ");
    scanf("%s", produtos_vendidos);
    fgets(produtos_vendidos, 6, stdin);
    printf("||      => (Novo) Opção de entrega: ");
    scanf("%s", opcao_entrega);
    fgets(opcao_entrega, 15, stdin);
    printf("||      => (Novo) Valor total: ");
    scanf("%s", valor_total);
    fgets(valor_total, 9, stdin);
    printf("|| = = = = = = = = = = = = = = = = = = = = = = = =  = = = = = = = ||\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_excluir_venda(void){
    char codigo[11];

    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =           Excluir venda          = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      => Código da venda: ");
    scanf("%s", codigo);
    fgets(codigo, 11, stdin);
    printf("||                                                                ||\n");
    printf("||      => Venda excluída!                                        ||\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}