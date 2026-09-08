#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 {int main(int argc, char *argv[]) {
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, dgv1, dgv2;

    scanf("%d %d %d.%d %d %d %d.%d %d %d - %d %d",
        &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &dgv1, &dgv2);

    printf("O cpf que voce inseriu %d%d%d.%d%d%d.%d%d%d - %d%d",
        num1, num2, num3, num4, num5, num6, num7, num8, num9, dgv1, dgv2);
        
    mnum1 = num1*11; mnum2 = num2*10; mnum3 = num3*9;
    mnum4 = num4*8; mnum5 = num5*7; mnum6 = num6*6;
    mnum7 = num7*5; mnum8 = num8*4; mnum9 = num9*3;
    mdv = dgv1 * 2;      
    soma = mnum1 +mnum2 +mnum3 +mnum4 +mnum5 +mnum6 +mnum7 +mnum8 +mnum9;
	soma *= 10; 
	resto1 = soma%11;
	
	printf("\n d%", resto2);
	
	if(dgv1 == resto1 && dgv2 == resto2) printf("\n cpf valido"); else printf("\n cpf invalido");        
            

    return 0;
}
