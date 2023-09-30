#include <stdio.h>

int main(){

    int num1, num2, num3, num4, menor;
    
    printf("Digite um numero: ");
    scanf("%d", &num1);
        printf("Digite um numero: ");
    scanf("%d", &num2);
        printf("Digite um numero: ");
    scanf("%d", &num3);
        printf("Digite um numero: ");
    scanf("%d", &num4);

     menor = num1;

      if (num2 < menor) 
      {
        menor = num2;
    }
    if (num3 < menor) 
    {
        menor = num3;
    }
    if (num4 < menor) 
    {
        menor = num4;
    }

    // Exibe o menor número
    printf("O menor numero e: %.2d\n", menor);



    return 0;

}