#include "stdio.h"

int main(void) {
  int c, i, j;
  int tab[128];
  
  for(i=0; i < 128; i++){
    tab[i]=0;
  }
  
/*jest ustawiony x zamiast EOF bo repl.it tego nie łapie*/
 while ((c=getchar()) != 'x') {
   ++tab[c];
 }
 
 for(i = 0; i < 128; i++){
   if (tab[i] != 0) {
   printf("%c", i);
   printf("\t");
     for(j = 1; j <= tab[i]; j++){
      printf("+");
    }
     printf("\n");
   }
   
 }
 
}