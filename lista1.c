//Leia um número e imprima o seu sucessor.
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num, sucessor;

    printf ("Digite um numero:\n");
    scanf ("%i", &num);

    sucessor= num + 1;

    printf ("O sucessor eh: %i\n", sucessor);

    return 0;
}

//Calcule a média aritmética de quatro números inteiros dados.
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num1, num2, num3, num4, media;

    printf ("Digite o primeiro numero:\n");
    scanf ("%i", &num1);
    printf ("Digite o segundo numero:\n");
    scanf ("%i", &num2);
    printf ("Digite o terceiro numero:\n");
    scanf ("%i", &num3);
    printf ("Digite o quarto numero:\n");
    scanf ("%i", &num4);

    media= (num1+num2+num3+num4)/4;

    printf ("A media dos quatro numeros eh %i\n", media);

    return 0;
}

/*Faça um algoritmo que receba 3 (três) notas e seus respectivos pesos, calcule e mostre a média 
ponderada dessas notas.*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int nota1, nota2, nota3, p1, p2, p3, mediap, somapesos;

  printf("Digite a primeira nota:\n");
  scanf ("%i", &nota1);
  printf ("Digite o peso da primeira nota:\n");
  scanf ("%i", &p1);
  printf("Digite a segunda nota:\n");
  scanf ("%i", &nota2);
  printf ("Digite o peso da segunda nota:\n");
  scanf ("%i", &p2);
  printf("Digite a terceira nota:\n");
  scanf ("%i", &nota3);
  printf ("Digite o peso da terceira nota:\n");
  scanf ("%i", &p3);

  somapesos= p1+p2+p3;
  mediap= (nota1*p1) + (nota2*p2) + (nota3*p3) / somapesos;

  printf ("A media ponderada eh: %i\n", mediap);

  return 0;
  
}

/*Faça um algoritmo que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o 
novo salário.*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  float salario, paumento, nvsalario, aumento;

  printf ("Informe o valor do salario:\n");
  scanf ("%f", &salario);
  printf ("Qual sera o percentual de aumento?\n");
  scanf ("%f", &paumento);

  aumento= salario * paumento/100;
  nvsalario= aumento + salario;

  printf ("O novo salario eh de: %f\n", nvsalario);
  return 0;
}

//Faça um algoritmo que peça ao usuário a base e a altura e calcule a área de um triangulo. 
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int base, altura, area;
  
  printf ("Digite o valor da base:\n");
  scanf ("%i", &base);
  printf ("Digite o valor da altura:\n");
  scanf ("%i", &altura);

  area= base*altura;

  printf ("A area do triangulo eh: %i", area);

  return 0;
}

/*Pedro comprou um saco de Ração com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a 
quantidade de ração em gramas. Faça um algoritmo que receba o peso do Saco de ração e a quantidade de ração 
fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após 5 (cinco) dias */
#include <stdio.h>
#include <stdlib.h>

int main ()
{
float g1, g2, psaco, pfinal, dias;

  printf ("Qual o peso do saco de racao em gramas? Lembrando que 1kg equivale a 1000 gramas.\n");
  scanf ("%f", &psaco);
  printf ("Qual a quantidade de racao que o gato 1 recebe diariamente? (em gramas)\n");
  scanf ("%f", &g1);
    printf ("Qual a quantidade de racao que o gato 2 recebe diariamente? (em gramas)\n");
  scanf ("%f", &g2);

  dias= (g1+g2) * 5;
  pfinal = psaco - dias;

  printf ("Restara no saco %f gramas de racao.\n", pfinal);
  return 0;
  }
  
  //Ler dois números inteiros para variáveis a e b. Trocar o valor de b com o de a, e imprimi-los.
  #include <stdio.h>
#include <stdlib.h>

int main ()
{
   int a, b,c;

    printf ("Digite um valor inteiro para A:\n");
    scanf ("%i", &a);
    printf ("Digite um valor inteiro para B:\n");
    scanf ("%i", &b);

    c=a;
    a=b;
    b=c;
    
    printf ("O novo valor de A eh: %i\n", a);
    printf ("O novo valor de B eh: %i\n", b);

  return 0;
  }

//Leia um número e imprima o resto da divisão por 7.
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int num, div;

   printf ("Digite um numero inteiro:\n");
   scanf ("%i", &num);

   div= num%7

   printf ("A divisao por 7 eh igual a: %i\n",div);
   return 0;
  }

/*Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do número de 
termos. formulas:
Sn=n*(a1+an)/2, onde Sn é a soma dos termos, a1 o primeiro termo e an o último termo. O n-ésimo termo de uma 
progressão aritmética,  pode ser obtido por meio da formula: an=a1+(n-1).r, onde r é a razão da P.A.*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int t1, t2, t3, somat, r;

  printf ("Digite o primeiro termo:\n");
  scanf ("%i", &t1);
  printf ("Digite o segundo termo:\n");
  scanf ("%i", &t2);
  printf ("Digite o terceiro termo:\n");
  scanf ("%i", &t3);

  somat=t1+t3;
  r=somat*(t1+t2+t3)/2;

  printf ("A soma dos termos dessa P.A eh:%i", r);
  return 0;
  }
  
//Ler um valor inteiro do teclado e dizer se é par 
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int num;

 printf ("Digite um numero inteiro:\n");
 scanf  ("%i", &num);

  if (num%2==0){
  printf ("O numero digitado eh par.\n");
  }else{
      
  }
  return 0;
  }

//Ler um valor inteiro do teclado e dizer se é ímpar 
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int num;

  printf ("Digite um numero inteiro:\n");
  scanf  ("%i", &num);

  if (num%2==1){
    printf ("O valor digitado eh impar.\n");
  }else{
    
  }
  return 0;
  }

//ler um valor inteiro do teclado e dizer se ímpar e maior que 100.
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int num;

  printf ("Digite um valor inteiro:\n");
  scanf  ("%i", &num);

  if (num%2==1){
    printf ("O valor digitado eh impar.\n");
  }else{
    
  }if (num>100){
    printf ("O valor digitado eh maior que 100.\n");
  }else {
    
  }
  return 0;
  }

//ler um valor inteiro do teclado e dizer se é par e menor que 100, ou ímpar e maior que 100
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int num;

  printf ("Digite um valor inteiro:\n");
  scanf  ("%i", &num);

  if (num%2==0){
    printf ("O valor digitado eh par.\n");
  }
  else {
    printf ("O valor digitado eh impar.\n");
  }
  if (num>100){
    printf ("O valor digitado eh maior que 100.");
  }
  else {
    printf ("O valor digitado eh menor que 100");
  }
  return 0;
  }

//ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75).
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int num;

  printf ("Digite um valor inteiro:\n");
  scanf  ("%i", &num);

  if (num<25){
    printf ("O valor digitado esta abaixo do intervalo.\n");
  }
  else {
    printf ("O valor digitado esta dentro do intervalo.\n");
  }
  if (num>75){
    printf ("O valor digitado esta acima do intervalo.\n");
  }
  else {
    
  }
  return 0;
  }

//ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99]
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Digite um valor inteiro:\n");
    scanf ("%i", &num);

    if ((num >=15) && (num <=45))
    printf ("O numero esta dentro do intervalo [15:45].\n");
    else
    printf ("O numero informado nao consta no intervalo [15:45]\n");

    if ((num >=66) && (num <=99))
    printf ("O numero esta contido no intervalo [66:99]\n");
    else
    printf ("o numero informado nao consta no intervalo [66:99]\n");

    return 0;
}

//ler dois valores inteiros do teclado e dizer se o primeiro é par e o segundo é ímpar.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v1, v2;
    
    printf("Digite um valor inteiro:\n");
    scanf ("%i", &v1);
    printf("Digite outro valor inteiro:\n");
    scanf ("%i", &v2);
    
    if (v1 % 2 ==0)
    printf ("O primeiro valor e par.\n");
    else
    printf ("O primeiro valor e impar.\n");


    if (v2 % 2 ==0)
    printf ("O segundo valor e par.\n");
    else
    printf ("O segundo valor e impar.\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cod;
    
    printf ("Ola, seja bem vindo a nossa lanchonete!\n");
    printf ("1. Hamburguer.....R$30,00\n");
    printf ("2. Cheeseburguer..R$35,50\n");
    printf ("3. Fritas.........R$20,50\n");
    printf ("4. Refrigerante...R$10,00\n");
    printf ("5. Milkshake......R$30,00\n");
    printf ("Digite o numero referente ao item escolhido:\n");
    scanf  ("%i", &cod);
    
    if (cod==1){
        printf ("Voce escolheu o Hamburguer, o total a ser pago eh de R$30,00\n");
    }
    if (cod==2){
        printf ("Voce escolheu o Cheeseburguer, o total a ser pago eh de R$35,50\n");
    }
    if (cod==3){
        printf ("Voce escolheu as Fritas, o total a ser pago eh de R$20,50\n");
    }
    if (cod==4){
        printf ("Voce escolheu o Refrigerante, o total a ser pago eh de R$10,00\n");
    }
    if (cod==5){
        printf ("Voce escolheu o Milkshake, o total a ser pago eh de R$30,00\n");
    }
    
    return 0;
}



//ler dois valores inteiros do teclado e dizer se o primeiro é par e positivo, e o segundo é ímpar e negativo.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2;

    printf("Digite dois valores, no minimo um negativo:\n");
    scanf ("%i %i", &num1, &num2);

    if (num1%2 ==0){
    printf ("O primeiro numero e par.");
    }else{
    printf ("O primeiro numero e impar.");
    }if (num1 >=0){
    printf ("O primeiro numero tambem e positivo.\n");
    }else{
    printf ("O primeiro numero tambem e negativo.\n");
    }

    if (num2%2==0){
    printf ("O segundo numero e par.");
    }else{
    printf ("O segundo numero e impar.");
    }if (num2 >=0){
    printf ("O segundo numero tambem e positivo.\n");
    }else{
    printf ("O segundo numero tambem e negativo.\n");
    }

    return 0;
}

//Calcular e imprimir o fatorial de um algoritmo
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int numero, fatorial, cont;
  printf ("Digite um numero:\n);
  scanf  ("%i", &numero);
  cont=1;
  fatorial=1;
  
  while (cont<=numero)
  {
      fatorial=fatorial*cont;
      cont=cont+1;

  }

  printf ("O fatorial de %i eh %i\n", numero, fatorial);
  return 0;
  }
          
 /*A serie de Fibonacci eh formada pela sequencia:
1,1,2,3,5,8,13,21,34...
Escreva um algoritmo q peça um num N maior que 2. Gere e imprima uma serie ate este
enesimo termo.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero,a,b,c,cont;

    printf ("Digite um numero inteiro maior que 2:\n");
    scanf  ("%i", &numero);
    a=1;
    b=1;

    printf("%i %i", a, b);
    cont=2;
    while (cont<numero)
    {
        c=a+b;
        printf ("%i", c);
        a=b;
        b=c;
        cont=cont+1;

    }

    return 0;
}



