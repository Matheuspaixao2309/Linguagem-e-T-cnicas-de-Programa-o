#include <stdio.h>
#include <stdlib.h>

int compara (int a, int b){
    if(a < b)return b;
    else return a;
}

int main(int argc, char *argv[]) {
    int valores[10];
    int maior, menor;

    printf("vamos ler os valores: \n");
    scanf("%d", &valores[0]);
    printf("%d\n", valores[0]);

    scanf("%d", &valores[1]);
    printf("%d\n", valores[1]);

    scanf("%d", &valores[2]);
    printf("%d\n", valores[2]);
    //continua...
    
    return 0;
}
