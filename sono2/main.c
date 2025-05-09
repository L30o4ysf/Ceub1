#include <stdio.h>
#include <stdlib.h>

int main (){
    int a;
    printf("insira o valor do seu produto: ");
    scanf("%d", &a);

    if (1 <= a && a <= 20)
        printf("Europa");
        else{
            if (21 <= a && a <= 40)
                printf("Asia");
            else{
                if (41 <= a && a <= 60)
                    printf("America");
                else{
                    if (61 <= a && a <= 80)
                        printf("Africa");
                    else{
                        if (81 <= a && a <= 100)
                            printf("Oceania");
                        else
                            printf("Valor invalido");
                    }
                }
            }
        }
    return 0;
}
