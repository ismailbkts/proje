#include <stdio.h>
#include <conio.h>


int main() { // 1'den 25'e 25'den 1'e geri sayan program
  int sayi = 0;


  printf("1'den 25'e ileri sayma\n");
  printf("======================\n\n");


  for(sayi=1;sayi<=25;sayi++)
  {
  printf("\t%i",sayi);
  }

  printf("\n\n\n"); 
  printf("25'den 1'e geri sayma\n");
  printf("=====================\n\n");


  for(sayi=25;sayi>=1;sayi--)
  {
  printf("\t%i",sayi);
  }


return 0;
}
