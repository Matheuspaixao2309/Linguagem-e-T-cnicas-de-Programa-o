#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, r;
	printf("Entre com os valores do problema: ");
	scanf("%d %d", &a, &b);

if(a > 0 && b > 0){
    if(a % 2 == 0){
        if(b % 2 == 0){
            printf("são multiplos de 2");
        }
    }

    if(a > b){
        if(a % b == 0){
            printf("são multiplos");
        }
    } else {
        if(b % a == 0){
            printf("são multiplos");
        }
    }
}
		
	}else {
	
	return 0;
}
