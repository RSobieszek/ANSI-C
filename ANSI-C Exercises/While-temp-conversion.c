#include <stdio.h>

/* wypisz zestawienie temperatur F-C dla 
f= 0,20,...,300 */


main()
{
  printf("nagłówek zestawienia\n");
  float fahr, celsius;
  int lower, upper, step;
  
  lower =0; /*dolna granica*/
  upper =300;
  step =20;
  celsius = lower;
  
  while (celsius <= upper) {
    fahr = (celsius * 9.0) / 5.0 + 32;
    printf("%2.0f\t%5.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
  
  printf("koniec\n");
}