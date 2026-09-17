#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.141592

int main() {

    int opcao;

    int idadeAtual, anoCorrente, anoNasc;

    printf("Quantos anos voce tem agora: ");
    scanf("%d", &idadeAtual);

    printf("Em que ano voce esta: ");
    scanf("%d", &anoCorrente);

    anoNasc = anoCorrente - idadeAtual;

    printf("O ano de nascimento do usuario e em %d\n", anoNasc);


    float kmHora, metrosSegundo;

    printf("Qual a sua velocidade em km/h: ");
    scanf("%f", &kmHora);

    metrosSegundo = (kmHora * 10) / 36;

    printf("Sua velocidade convertida para m/s e de %.2f m/s\n",
           metrosSegundo);


    float reais, dolar, taxaCambio;

    printf("Entre com o valor em reais: ");
    scanf("%f", &reais);

    printf("A cotacao do dolar esta 1 real = 5,22\n");

    printf("Insira o valor da cotacao do dolar: ");
    scanf("%f", &taxaCambio);

    dolar = reais / taxaCambio;

    printf("O valor em dolares e de: %.2f\n", dolar);


    float grausC, grausF;

    printf("Qual a temperatura em celsius: ");
    scanf("%f", &grausC);

    grausF = (grausC * 1.8) + 32;

    printf("O valor convertido para Fahrenheit e de %.2f\n", grausF);


    double valorGraus, valorRad;

    printf("Entre com o valor de graus: ");
    scanf("%lf", &valorGraus);

    valorRad = (valorGraus / 180.0) * PI;

    printf("Seu valor convertido para radianos e igual a %.2lf\n",
           valorRad);


    int numero, anterior, posterior;

    printf("Entre com o valor de n: ");
    scanf("%d", &numero);

    anterior = numero - 1;
    posterior = numero + 1;

    printf("O numero %d, seu antecessor %d e seu sucessor %d\n",
           numero, anterior, posterior);


    float totalHeranca = 780000;
    float parteA, parteB, parteC;

    parteA = totalHeranca * 46 / 100;
    parteB = totalHeranca * 32 / 100;
    parteC = totalHeranca * 22 / 100;

    printf("O valor que cada um recebera e de:\n");
    printf("Pessoa 1: %.2f\n", parteA);
    printf("Pessoa 2: %.2f\n", parteB);
    printf("Pessoa 3: %.2f\n", parteC);


    int segundosTotal, horasTotal, minutosTotal, segundosRestantes;

    printf("Quanto foi o tempo do evento em segundos: ");
    scanf("%d", &segundosTotal);

    horasTotal = segundosTotal / 3600;
    minutosTotal = (segundosTotal % 3600) / 60;
    segundosRestantes = segundosTotal % 60;

    printf("O tempo do evento ao todo foi de:\n");
    printf("%d Horas\n", horasTotal);
    printf("%d Minutos\n", minutosTotal);
    printf("%d Segundos\n", segundosRestantes);


    int tempoHoras, mediaKm, totalKm;
    float litrosConsumidos;

    printf("Qual foi o tempo gasto em horas do total da viagem: ");
    scanf("%d", &tempoHoras);

    printf("Qual foi a velocidade media em km/h durante a viagem: ");
    scanf("%d", &mediaKm);

    totalKm = tempoHoras * mediaKm;

    litrosConsumidos = totalKm * (1.0 / 12.0);

    printf("A distancia percorrida foi de %d km\n", totalKm);
    printf("Foram usados %.2f Litros de combustivel ao todo da viagem\n",
           litrosConsumidos);


    int valor1, valor2, valor3, maiorAB, maiorFinal;

    printf("Insira tres valores para saber qual e o maior: ");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    maiorAB = valor1 > valor2 ? valor1 : valor2;
    maiorFinal = maiorAB > valor3 ? maiorAB : valor3;

    printf("O maior entre %d, %d e %d = %d\n",
           valor1, valor2, valor3, maiorFinal);

    return 0;
}
