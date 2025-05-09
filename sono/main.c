#include <stdio.h>
#include <stdlib.h>

int main(){
    int semana;
    printf("Digite o numero correspondente ao dia da semana que voce quer: ");
    scanf("%d", &semana);
    if (semana == 1)
        printf("domingo");
    else
        if (semana == 2)
        printf("segunda");
    if (semana == 3)
        printf("terca");
    else
        if (semana == 4)
        printf("quarta");
    if (semana == 5)
        printf("quinta");
    else
        if (semana == 6)
        printf("sexta");
    else
        if (semana == 7)
        printf("sabado");
    else
        if (semana >= 8)
        printf("dia da semana invalido");

    return 0;
}
