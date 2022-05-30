/*3. Escreva um programa que solicite iterativamente um número do usuário e imprima sempre o menor valor fornecido. 
Crie um critério para finalização do programa. Utilize ponteiros.*/

#include <stdio.h>

int main() {
  float a = 1; int i = 0;
  float maior, menor;
  
  while( a != 0){
    printf("\nDigite um número: ");
    scanf("%f", &a);
    
    if(i == 0)
    {
    maior = a;
    menor = a;
    i++;
    }
    if(a == 0)
    {
      printf("O programa foi encerrado!");
      break;
    }
    if(a > maior || (a <= maior && a > menor))
    {
      maior = a;
      printf("O menor valor digitado até agora é: %f", menor);
    }
    
    if(a < menor)
    {
      menor = a;
      printf("O menor valor digitado até agora é: %f", menor);
    }
    else if(a == menor)
    {
      printf("O menor valor digitado até agora é: %f", menor);
    }
      }
  return 0;
}
