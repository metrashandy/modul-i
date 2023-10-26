#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main()
{
   char operator;
   double Num1, Num2, hasil;
   bool ulang = false;
   while (!ulang)
   {
      printf("\nmasukan jenis operator(+ - * / %%) :");
      scanf("%c", &operator);
      fflush(stdin);
      system("cls");

      switch (operator)
      {
      case '+':
         printf("masukan bilangan pertama :");
         scanf("%lf", &Num1);
         printf("masukan bilangan kedua :");
         scanf("%lf", &Num2);
         hasil = Num1 + Num2;
         printf("\nhasil = %lf", hasil);
         ulang = true;
         break;

      case '-':
         printf("masukan bilangan pertama :");
         scanf("%lf", &Num1);
         printf("masukan bilangan kedua :");
         scanf("%lf", &Num2);
         hasil = Num1 - Num2;
         printf("\nhasil = %lf", hasil);
         ulang = true;
         break;

      case '*':
         printf("masukan bilangan pertama :");
         scanf("%lf", &Num1);
         printf("masukan bilangan kedua :");
         scanf("%lf", &Num2);
         if(Num1 <= 0 || ){}
         hasil = Num1 * Num2;
         printf("\nhasil = %lf", hasil);
         ulang = true;
         break;

      case '/':
         printf("masukan bilangan pertama :");
         scanf("%lf", &Num1);
         printf("masukan bilangan kedua :");
         scanf("%lf", &Num2);
         hasil = Num1 / Num2;
         printf("\nhasil = %lf", hasil);
         ulang = true;
         break;

      case '%':
         printf("masukan bilangan pertama :");
         scanf("%lf", &Num1);
         printf("masukan bilangan kedua :");
         scanf("%lf", &Num2);
         hasil = (int)Num1 % (int)Num2;
         printf("\nhasil = %lf", hasil);
         ulang = true;
         break;

      default:
         printf("\nmasukan operator yang valid");
         break;
      }
   }

   return 0;
}