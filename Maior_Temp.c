#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, maior_temp, maior;
	
	printf("Insira os valores A; B, C: ")
	scanf("%d %d %d, &a", &a, &b, &c");
	if(a>b && a>c){
		printf("%d eh o maior\n", a);
}
if(b>a && b>c){
	printf("%d eh o maior\n", b);
}
if(c>a && c>b){
printf("%d eh o maior\n", c);
	}
	return 0;
}
