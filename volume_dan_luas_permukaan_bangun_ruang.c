#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
int tabung(int r, int t);
int bola(int r);
int limas_segiempat(int sa, int t, int sm);
int prisma_segitiga(int sa, int ta, int t);
int kerucut(int r, int sm, int t);
double Lp, v;
double phi = 3.14;
int main()
{
   char jenis_bangun;
   int r, t, sa, sm, ta;
   bool ulang = false;
   while (!ulang)
   {
      printf("\nmasukan huruf untuk memilih bangun ruang\n");
      printf("pilih jenis bangun ruang \nA.(tabung),\nB.(bola),\nC.(limas segiempat),\nD.(prisma segitiga),\nE(kerucut) :");
      scanf("%c", &jenis_bangun);
      fflush(stdin);
      system("cls");
      jenis_bangun = toupper(jenis_bangun);
      switch (jenis_bangun)
      {
      case 'A':
         printf("masukan panjang jari - jari :");
         scanf("%d", &r);
         printf("masukan tinggi :");
         scanf("%d", &t);
         tabung(r, t);
         printf("volume : %lf cm3", v);
         printf("\nluas permukaan : %lf m2", Lp);
         ulang = true;
         break;
      case 'B':
         printf("masukan panjang jari - jari :");
         scanf("%d", &r);
         bola(r);
         printf("volume : %lf cm3", v);
         printf("\nluas permukaan : %lf m2", Lp);
         ulang = true;
         break;
      case 'C':
         printf("masukan panjang sisi alas :");
         scanf("%d", &sa);
         printf("masukan tinggi :");
         scanf("%d", &t);
         printf("masukan panjang sisi miring :");
         scanf("%d", &sm);
         limas_segiempat(sa, t, sm);
         printf("volume : %lf cm3", v);
         printf("\nluas permukaan : %lf m2", Lp);
         ulang = true;
         break;
      case 'D':
         printf("masukan panjang sisi alas :");
         scanf("%d", &sa);
         printf("masukan tinggi sisi alas :");
         scanf("%d", &ta);
         printf("masukan tinggi prisma:");
         scanf("%d", &t);
         prisma_segitiga(sa, ta, t);
         printf("volume : %lf cm3", v);
         printf("\nluas permukaan : %lf m2", Lp);
         ulang = true;
         break;
      case 'E':
         printf("masukan panjang jari - jari :");
         scanf("%d", &r);
         printf("masukan panjang sisi miring :");
         scanf("%d", &sm);
         printf("masukan tinggi :");
         scanf("%d", &t);
         kerucut(r, sm, t);
         printf("volume : %lf cm3", v);
         printf("\nluas permukaan : %lf m2", Lp);
         ulang = true;
         break;
      default:
         printf("pilih salah satu bangun yang tersedia!!");
         break;
      }
   }
   return 0;
}

int tabung(int r, int t)
{
   if (r <= 0 || t <= 0)
   {
      printf("nilai tidak boleh negatif!!");
   }
   else
   {
      v = phi * r * r * t;
      Lp = 2 * phi * r * t + 2 * phi * r * r;
      return v, Lp;
   }
}

int bola(int r)
{
   if (r <= 0)
   {
      printf("nilai tidak boleh negatif!!");
   }
   else
   {
      v = (phi * r * r * r * 4) / 3;
      Lp = 4 * phi * r * r;
      return v, Lp;
   }
}

int limas_segiempat(int sa, int t, int sm)
{
   if (sa <= 0 || t <= 0 || sm <= 0)
   {
      printf("nilai tidak boleh negatif!!");
   }
   else
   {
      v = (sa * sa * t) / 3;
      Lp = (sa / 2) * t * 4 + sa * sa;
      return v, Lp;
   }
}

int prisma_segitiga(int sa, int ta, int t)
{
   if (sa <= 0 || ta <= 0 || t <= 0)
   {
      printf("nilai tidak boleh negatif!!");
   }
   else
   {
      v = ((sa * ta) / 2) * t;
      Lp = ((sa * ta) / 2) * 2 + sa * 3 * t;
      return v, Lp;
   }
}

int kerucut(int r, int sm, int t)
{
   if (r <= 0 || sm <= 0 || t <= 0)
   {
      printf("nilai tidak boleh negatif!!");
   }
   else
   {
      v = (phi * r * r * r * t) / 3;
      Lp = (phi * r * sm) + (phi * r * r);
      return v, Lp;
   }
}