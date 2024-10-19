#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "modulos/gerais/gerais.h"
#include "modulos/produtos/produtos.h"
#include "modulos/clientes/clientes.h"
#include "modulos/vendas/vendas.h"
#include "modulos/entregas/entregas.h"

char tela_entregas(void);
void tela_entregas_pendentes(void);
void tela_confirmcancel_entregas(void);

int main(void){
    char op;

    do{
        op = menu_principal();

        if(op == '1'){
            char op_produto = tela_modulo_produtos();
            if(op_produto == '1'){
                tela_cadastrar_produto();
            }else if(op_produto == '2'){
                tela_verificar_produto();
            }else if(op_produto == '3'){
                tela_alterar_produto();
            }else if(op_produto == '4'){
                tela_excluir_produto();
            }
        }else if(op == '2'){
            char op_clientes = tela_modulo_clientes();
            if(op_clientes == '1'){
                tela_cadastrar_cliente();
            }else if(op_clientes == '2'){
                tela_verificar_cliente();
            }else if(op_clientes == '3'){
                tela_alterar_cliente();    
            }else if(op_clientes == '4'){
                tela_excluir_cliente();
            }
        }else if(op == '3'){
            char op_vendas = tela_modulo_vendas();
            if(op_vendas == '1'){
                tela_cadastrar_venda();
            }else if(op_vendas == '2'){
                tela_alterar_venda();
            }else if(op_vendas == '3'){
                tela_excluir_venda();
            }else if(op_vendas == '4'){
                tela_exibir_venda();
            }
        }else if(op == '4'){
            char op_entregas = tela_entregas();
            if(op_entregas == '1'){
                tela_entregas_pendentes();
            }else if(op_entregas == '2'){
                tela_confirmcancel_entregas();
            }
        }else if(op == '5'){
            system("clear||cls");
            printf("\n");
            printf("Menu em construção\n");
            printf("| Tecle <ENTER> para continuar...\n");
            getchar();
        }else if(op == '6'){
            informacoes_gerais();
        }else if(op == '7'){
            informacoes_da_equipe();
        }else if(op == '0'){
            printf("fim\n");
        }else{
            printf("Opção inválida!");
        }
    }while(op != '0');

    return 0;
}

char tela_entregas(void){
    char op_entregas; 
    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =           Menú entregas          = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      1- Verificar entregas pendentes                           ||\n");
    printf("||      2- Confirmar entregas ou cancelar entrega                 ||\n");
    printf("||      0- Sair                                                   ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = = = = = = = = = = = = = = = = = =  = = = = = = = ||\n");
    printf("||    => Escolha a opção desejada: ");
    scanf("%c", &op_entregas);
    getchar();
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
    return op_entregas;
}

void tela_entregas_pendentes(void){
    char entregas[60];
    strcpy(entregas,"Chico das melancia, rua maledo, 701");
    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =        Entrgas pendêntes         = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||      1- %s                                                     ||\n", entregas);
    printf("||      2- %s                                                     ||\n", entregas);
    printf("||      3- %s                                                     ||\n", entregas);
    printf("||      4- %s                                                     ||\n", entregas);
    printf("||      5- %s                                                     ||\n", entregas);
    printf("||                                                                ||\n");
    printf("|| = = = = = = = = = = = = = = = = = = = = = = = =  = = = = = = = ||\n");
    printf("\n");
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_confirmcancel_entregas(void){
    char resp; 
    char num[4];
    system("clear||cls");
    printf("\n");
    printf("|| ______________________________________________________________ ||\n");
    printf("||                                                                ||\n");
    printf("|| = = = = = = = =        Confirmar/cancelar        = = = = = = = ||\n");
    printf("||                                                                ||\n");
    printf("||       Digite o número da entrega: ");
    scanf("%s", num);
    getchar();
    printf("||       Deseja confirmar a entrega?                              ||\n");
    printf("||                                                                ||\n");
    printf("||       obs: 's' para confirmar e 'n' para cancelar              ||\n");
    printf("|| = = = = = = = = = = = = = = = = = = = = = = = =  = = = = = = = ||\n");
    printf("     => Digite a opção desejada(s/n): ");
    scanf("%c", &resp);
    getchar();
    printf("\n");
    if(resp == 's'){
        printf("| Entrega confirmada!\n");
    }else{
        printf("| Entrega cancelada!\n");
    }
    printf("| Tecle <ENTER> para continuar...\n");
    getchar();
}


