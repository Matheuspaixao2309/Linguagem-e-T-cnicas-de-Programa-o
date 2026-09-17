#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592

int main() {

    /* Exercicio 1 - ordem inversa */
    {
        int primeiro, segundo;

        printf("Entre com o primeiro numero: ");
        scanf("%d", &primeiro);

        printf("Entre com o segundo numero: ");
        scanf("%d", &segundo);

        printf("Sua ordem inversa e: %d %d\n", segundo, primeiro);
    }

    /* Exercicio 2 - A * 10^n */
    {
        double numero, resultadoFormula;
        int expoente;

        printf("Entre com o valor de A: ");
        scanf("%lf", &numero);

        if (numero >= 1 && numero < 10) {
            printf("Valor valido!\n");
        }
        else {
            printf("Valor invalido! (deve estar entre 1 e 10)\n");
        }

        printf("Entre com o valor de n: ");
        scanf("%d", &expoente);

        resultadoFormula = numero * pow(10, expoente);

        printf("O resultado da formula e: %.0lf\n", resultadoFormula);
    }

    /* Exercicio 3 - decimal para binario */
    {
        int numeroDecimal, bit32, bit16, bit8, bit4, bit2, bit1, restante;

        printf("Entre com o valor de N: ");
        scanf("%d", &numeroDecimal);

        restante = numeroDecimal;

        bit1 = restante % 2;
        restante = restante / 2;

        bit2 = restante % 2;
        restante = restante / 2;

        bit4 = restante % 2;
        restante = restante / 2;

        bit8 = restante % 2;
        restante = restante / 2;

        bit16 = restante % 2;
        restante = restante / 2;

        bit32 = restante % 2;
        restante = restante / 2;

        printf("O valor de N em binario e: %d%d%d%d%d%d%d\n", bit32, bit16, bit8, bit4, bit2, bit1);
    }

    /* Exercicio 4 - salario com comissao */
    {
        double salarioFixo, totalVendas, totalReceber;

        printf("Entre com o valor do seu salario fixo: ");
        scanf("%lf", &salarioFixo);

        printf("Qual o valor total de suas vendas: ");
        scanf("%lf", &totalVendas);

        totalReceber = salarioFixo + (totalVendas * 0.15);

        printf("O total a receber no final do mes e de %.2lf\n", totalReceber);
    }

    /* Exercicio 5 - soma, media e produto */
    {
        float valor1, valor2, valor3, valor4, somaValores, mediaValores, produtoValores;

        printf("Entre com o valor de a: ");
        scanf("%f", &valor1);

        printf("Entre com o valor de b: ");
        scanf("%f", &valor2);

        printf("Entre com o valor de c: ");
        scanf("%f", &valor3);

        printf("Entre com o valor de d: ");
        scanf("%f", &valor4);

        somaValores = valor1 + valor2 + valor3 + valor4;
        mediaValores = somaValores / 4;
        produtoValores = valor1 * valor2 * valor3 * valor4;

        printf("A soma dos valores e: %.2f\n", somaValores);
        printf("A media dos valores e: %.2f\n", mediaValores);
        printf("O produto dos valores e: %.2f\n", produtoValores);
    }

    /* Exercicio 6 - idade em dias */
    {
        int idadeEmDias, qtdAnos, qtdMeses, qtdDias, diasRestantes;

        printf("Digite a idade em dias: ");
        scanf("%d", &idadeEmDias);

        qtdAnos = idadeEmDias / 365;
        diasRestantes = idadeEmDias % 365;

        qtdMeses = diasRestantes / 30;
        qtdDias = diasRestantes % 30;

        printf("%d ano(s)\n", qtdAnos);
        printf("%d mes(es)\n", qtdMeses);
        printf("%d dia(s)\n", qtdDias);
    }

    /* Exercicio 7 - volume da esfera */
    {
        float raioEsfera, volumeEsfera;

        printf("Qual o valor do raio da esfera: ");
        scanf("%f", &raioEsfera);

        volumeEsfera = (4 / 3.0) * PI * pow(raioEsfera, 3);

        printf("O volume dessa esfera e de %.2f\n", volumeEsfera);
    }

    /* Exercicio 8 - distancia entre dois pontos */
    {
        int xPonto1, yPonto1, xPonto2, yPonto2;
        float distancia, cat1, cat2;

        printf("Entre com a distancia do p1(x1,y1): ");
        scanf("%d", &xPonto1);
        scanf("%d", &yPonto1);

        printf("Entre com a distancia do p2(x2,y2): ");
        scanf("%d", &xPonto2);
        scanf("%d", &yPonto2);

        cat1 = pow(xPonto2 - xPonto1, 2);
        cat2 = pow(yPonto2 - yPonto1, 2);

        distancia = sqrt(cat1 + cat2);

        printf("A distancia entre os dois pontos e de %.2f\n", distancia);
    }

    return 0;
