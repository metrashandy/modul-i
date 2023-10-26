#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
//-------------------------PROGRAM PENGHITUNG LUAS DAN KELILING BANGUN DATAR--------------------------//
char jenis_bangun;
double luas, keliling;
double phi = 3.14;

void segitiga_sembarang(int s1, int s2, int s3);
void belah_ketupat(int s1, int d1, int d2);
void jajargenjang(int a, int m, int t);
void trapesium(int a, int at, int m, int t);
void lingkaran(int r);

int main()
{

   int s1, s2, s3, d1, d2, a, t, m, r, at;
   bool ulang = false;

   while (!ulang)
   {
      printf("\nmasukan huruf untuk memilih bangun datar\n");
      printf("pilih jenis bangun datar \nA.(segitiga sembarang),\nB.(belah ketupat),\nC.(jajargenjang),\nD.(trapesium),\nE(lingkaran) :");
      scanf("%c", &jenis_bangun);
      fflush(stdin);
      system("cls");
      jenis_bangun = toupper(jenis_bangun);
      switch (jenis_bangun)
      {
      case 'A':
         printf("masukan panjang sisi 1 :");
         scanf("%d", &s1);
         printf("masukan panjang sisi 2 :");
         scanf("%d", &s2);
         printf("masukan panjang sisi 3 :");
         scanf("%d", &s3);
         segitiga_sembarang(s1, s2, s3);
         ulang = true;
         break;
      case 'B':
         printf("masukan panjang sisi :");
         scanf("%d", &s1);
         printf("masukan panjang diagonal 1 :");
         scanf("%d", &d1);
         printf("masukan panjang diagonal 2 :");
         scanf("%d", &d2);
         belah_ketupat(s1, d1, d2);
         ulang = true;
         break;
      case 'C':
         printf("masukan panjang sisi alas :");
         scanf("%d", &a);
         printf("masukan panjang sisi miring :");
         scanf("%d", &m);
         printf("masukan tinggi :");
         scanf("%d", &t);
         jajargenjang(a, m, t);
         ulang = true;
         break;
      case 'D':
         printf("masukan panjang sisi alas :");
         scanf("%d", &a);
         printf("masukan panjang sisi atas :");
         scanf("%d", &at);
         printf("masukan panjang sisi miring :");
         scanf("%d", &m);
         printf("masukan tinggi :");
         scanf("%d", &t);
         trapesium(a, at, m, t);
         ulang = true;
         break;
      case 'E':
         double phi = 3.14;
         int r;
         printf("masukan panjang jari - jari :");
         scanf("%d", &r);
         lingkaran(r);
         ulang = true;
         break;
      default:
         printf("\npilih salah satu bangun yang tersedia!!");
         break;
      }
   }
   return 0;
}
void segitiga_sembarang(int s1, int s2, int s3)
{
   int s;
   if (s1 <= 0 || s2 <= 0 || s3 <= 0)
   {
      printf("nilai tidak boleh negatif!!");
   }
   else
   {
      keliling = s1 + s2 + s3;
      s = keliling / 2;
      luas = sqrt(s) * (s - s1) * (s - s2) * (s - s3);
      printf("keliling : %lf cm", keliling);
      printf("\nluas : %lf cm2", luas);
   }
}

void belah_ketupat(int s1, int d1, int d2)
{
   if (s1 <= 0 || d1 <= 0 || d2 <= 0)
   {
      printf("nilai tidak boleh negatif!!");
   }
   else
   {
      keliling = s1 * 4;
      luas = (d1 * d2) / 2;
      printf("keliling : %lf cm", keliling);
      printf("\nluas : %lf cm2", luas);
   }
}

void jajargenjang(int a, int m, int t)
{
   if (a <= 0 || m <= 0 || t <= 0)
   {
      printf("nilai tidak boleh negatif!!");
   }
   else
   {
      keliling = 2 * (a + m);
      luas = a * t;
      printf("keliling : %lf cm", keliling);
      printf("\nluas : %lf cm2", luas);
   }
}

void trapesium(int a, int at, int m, int t)
{
   if (a <= 0 || at <= 0 || m <= 0 || t <= 0)
   {
      printf("nilai tidak boleh negatif!!");
   }
   else
   {
      keliling = a + at + (2 * m);
      luas = (a + at) / 2 * t;
      printf("keliling : %lf cm", keliling);
      printf("\nluas : %lf cm3", luas);
   }
}

void lingkaran(int r)
{
   if (r <= 0)
   {
      printf("nilai tidak boleh negatif!!");
   }
   else
   {
      keliling = 2 * phi * r;
      luas = phi * r * r;
      printf("keliling : %lf cm", keliling);
      printf("\nluas : %lf cm3", luas);
   }
}