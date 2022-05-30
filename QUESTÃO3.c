/*3. Escreva um programa que solicite iterativamente um número do usuário e imprima sempre o menor valor fornecido. 
Crie um critério para finalização do programa. Utilize ponteiros.*/

#include <stdio.h>

int main() {
  float a = 1, maior, menor; int i = 0;
  float *p;
  p = &a;
  
  
  while( a != 0){
    printf("\nDigite um número: ");
    scanf("%f", p);
    
    if(i == 0)
    {
    maior = a;
    menor = a;
    i++;
    }
    
    if(*p == 0)
    {
      printf("O programa foi encerrado!");
      break;
    }
    
    if(*p > maior || (*p <= maior && *p > menor))
    {
      maior = a;
      printf("O menor valor digitado até agora é: %f", menor);
    }
    
    if(*p < menor)
    {
      menor = a;
      printf("O menor valor digitado até agora é: %f", menor);
    }
    
    else if(*p == menor)
    {
      printf("O menor valor digitado até agora é: %f", menor);
    }
      }
  return 0;
}
