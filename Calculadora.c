#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <ctype.h>

void somar(float a, float b){
    float
    c = a + b;
    printf("O resultado de %.0f + %.0f = %.0f\n", a, b, c);
}

void subtrair(float a, float b){
    float c;
    c = a - b;
    printf("O resultado de %.0f - %.0f = %.0f\n", a, b, c);
}

float multiplicar(float a, float b){
    float c;
    c = a * b;
    return c;
}

float dividir(float a, float b){
    float c;
    c = a / b;
    return c;
}

int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
    system("cls");

    int opc, esc;
    float a, b, c, d;
    do{
        system("cls");
        printf("Informe o primeiro valor: ");
        scanf("%f", &a);
        printf("Informe o segundo valor: ");
        scanf("%f", &b);
        printf("\tCalculadora\n");
        printf("[1] - Somar\n[2] - Subtrair\n[3] - Multiplicar\n[4] - Dividir\n");
        printf("Sua opção: ");
        scanf("%d", &opc);
        switch (opc){
            case 1:
                system("cls");
                somar(a, b);
                system("pause");
                break;
            case 2:
                system("cls");
                subtrair(a, b);
                system("pause");
                break;
            case 3:

                system("cls");
                c = multiplicar(a, b);
                printf("%0.f * %.0f = %.0f\n", a, b, c);
                system("pause");
                break;
            case 4:
                system("cls");
                d = dividir(a, b);
                printf("%.0f / %.0f = %.1f\n", a, b, d);
                system("pause");
                break;
            case 0:
                system("cls");
                printf("Finalziando o programa...\n");
                Sleep(1000);
                printf("Programa Encerrado!\n");
                Sleep(900);
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
        printf("Deseja calcular outro número?: [1] - SIM ou [0] - NÃO\n");
        printf("Sua opção? ");
        scanf("%d", &esc);
        if (esc > 1 || esc < 0){
            while(esc > 1 || esc < 0){
                printf("Deseja calcular outro consumo?: [1] - SIM ou [0] - NÃO\n");
                printf("Sua opção? ");
                scanf("%d", &esc);
            }
        } 
    }while(esc != 0);
    printf("Encerrando o programa....\n");
    Sleep(1000);
    printf("PROGRAMA ENCERRADO!");
    Sleep (1000);
return 0;  
}