#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <ctype.h>

void linha(){
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("cls");

    /*Tabela de Valores:
    7 reais da assinatura bï¿½sica:
    1 real a mais por cada consumo no intervalo de 11 - 30 m³
    2 reais a mais por cada  consumo no intervalo de 31 - 100 m³
    5 reais a mais por cada  consumo no intervalo de 101 - 120 m³
    */

   int consumo, quantidade, opc;
   float conta = 0;

    do{
        system("cls");
        printf("\tCálculo de Consumo de Água\n\n");
        printf("Informe o consumo de água: ");
        scanf("%d", &consumo);
        printf("Calculando....\n");
        Sleep(1000);
        linha();
        if (consumo > 100){
            quantidade = consumo - 100;
            consumo = consumo - quantidade;
            conta = conta + (quantidade * 5);
        }
        if (consumo > 30){
            quantidade = consumo - 30;
            consumo = consumo - quantidade;
            conta = conta + (quantidade * 2);
        }
        if (consumo > 10){
            quantidade = consumo - 10;
            consumo = consumo - quantidade;
            conta = conta + (quantidade * 1);
        }
        conta = conta + 7;
        printf("Valor para pagamento do consumo é de R$: %.2f\n\n", conta);
        linha();   
        printf("\tTabela de Valores\n");
        printf("7 reais da assinatura básica\n1 real a mais por cada consumo no intervalo de 11 - 30 m³\n2 reais a mais por cada consumo no intervalo de 31 - 100 m³\n5 reais a mais por cada consumo no intervalo de 101 - 120 m³\n\n");
        printf("Obs: Os valores de consumo são acumulativos!\n");
        linha();
        printf("Deseja fazer um novo cálculo? [1] - SIM / [0] NÃO: ");
        scanf("%d", &opc);
        if (opc > 1 || opc < 0){
            while(opc > 1 || opc < 0){
                printf("Opção invalida!\n");
                printf("Deseja calcular outro consumo?: [1] - SIM ou [0] - NÃO\n");
                printf("Sua opção? ");
                scanf("%d", &opc);
            }
        } 
        conta = 0;
    }while(opc != 0);
    system("cls");
    printf("Encerrando Programa....\n");
    Sleep(1000);
    printf("Programa Encerrado!");
    Sleep(1000);
return 0;
}  