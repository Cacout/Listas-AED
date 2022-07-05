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
